--case--

select customer_id,
case 
	when (customer_id <=100) then 'premium'
	when (customer_id between 100 and 200) then 'plus'
	else  'normal' 
end as label

from customer;

-- case expression--

select customer_id,
case customer_id
	when 2 then 'first place'
	when 5 then 'second place'
	else 'lost'
end as result
from customer;


select * from film;
-- we can do also do by groupby--
select 
case rental_rate
	when 0.99 then 1
	else 0
end as round
from film;


--now sum this--
select 
sum(case rental_rate
	when 0.99 then 1
	else 0
end) as round
from film;

--now do for diff classes
select 
sum(case rental_rate
	when 0.99 then 1
	else 0
end) as premium,
sum(case rental_rate
	when 2.99 then 3
	else 0
end) as regular
from film;

--challenge--
-- know and compare various amounts of films we have per movie--
select * from film;
select 
sum(
case rating
	when 'R' then 1 else 0
end) as r,
sum(
case rating
	when 'PG' then 1 else 0
end) as pg ,
sum(
case rating
	when 'PG-13' then 1 else 0
end) as pg13
from film;


--coalesce--
select coalesce(null,1,2);

/* 
select item, (price-coalesce(discount,0))
as final
from table;

item  price  discount
a		100		20
b		300		null
c		200		10


item  final  
a		80		
b		300		
c		190		

*/

--cast--

select cast('5' as integer) as new_int;
select '5'::integer;

select * from rental;
--char length of inv id--
select char_length(cast(inventory_id as varchar))
from rental;

--nullif--
-- learning db--

create table depts
(
 first_name varchar(20),
 dep_name varchar(20)
);

insert into depts
(first_name, dep_name)
values
('dhiyanesh','a'),
('harita','a'),
('random','b');

select * from depts;

--ratio between a and b--
select
sum
(
 case
	when dep_name = 'a' then 1
	else 0
end
) / 
sum
(
 case
	when dep_name = 'b' then 1
	else 0
end
) as dep_ratio
from depts;

--if no people on dep b--
delete from depts
where dep_name = 'b';

select * from depts;

-- now we will get error if we use same code to find ratio....use nullif to  avoid error--
select nullif(10,10);
select
sum
(
 case
	when dep_name = 'a' then 1
	else 0
end
) / 
nullif
(
sum
(
 case
	when dep_name = 'b' then 1
	else 0
end 
) , 0) as dep_ratio
from depts;
 --same in 3 lines--
 select
 (
  sum(case when dep_name ='a'then 1 else 0 end) / 
  nullif(sum(case when dep_name = 'b' then 1 else 0 end),0)	
 ) as dep_ratio
 from depts;

--views--
-- dvd rentaldb--
select * from address;
select * from customer;

select first_name, last_name, address 
from customer
inner join address
on customer.address_id  = address.address_id;

--store as view--
create view customer_info as 
select first_name, last_name, address 
from customer
inner join address
on customer.address_id  = address.address_id;

select * from customer_info;
select first_name from customer_info;

create or replace view customer_info as
select first_name, last_name, address, district
from customer
inner join address
on customer.address_id  = address.address_id;

select * from customer_info;

alter view customer_info 
rename to c_info;

select * from c_info;
 
drop view customer_info;
drop view if exists customer_info;


--export import--
create table simple
(
a integer,
b integer,
c integer
)

select * from simple;
