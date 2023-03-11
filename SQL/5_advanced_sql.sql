show all;

show timezone;
select now();
select timeofday();
select current_time;
select current_date;

--extract() age()  to_char() --

select extract(year from payment_date) as year
from payment;

select extract(quarter from payment_date) as year
from payment;

select age(payment_date)
from payment;

select to_char(payment_date,'dd-mm-yyy')
from payment;

select to_char(payment_date,'mm/dd/yyyy')
from payment;

-- no of payments occured on monday--
--dow - day of week 1 to 7--

select count(*) from payment 
where extract(dow from payment_date) = 1;


-- mathematicl functions--

select round(rental_rate/replacement_cost,3)*100 
from film;

select 0.1*replacement_cost as deposit
from film;


--strings and functions--

select length(first_name) from customer;

select first_name || ' ' || upper(last_name) as full_name
from customer;

select left(first_name,1) || lower(last_name) || '@gmail.com' as customer_email
from customer;

--sub query--

select title, rental_rate
from film
where rental_rate > (select avg(rental_rate) 
					 from film);


select * from inventory;
select * from rental;

select inventory.film_id from inventory
inner join rental
on inventory.inventory_id = rental.inventory_id
where return_date between '2005-05-29' and '2005-05-30';

select film_id, title
from film
where film_id in
(select inventory.film_id from inventory
inner join rental
on inventory.inventory_id = rental.inventory_id
where return_date between '2005-05-29' and '2005-05-30')
order by film_id;

select * from payment,customer
where payment.customer_id = customer.customer_id
and amount >11;

select first_name, last_name
from customer as c
where exists
(select * from payment as p 
where p.customer_id = c.customer_id
and amount >11);


--self join--
-- what titles have same movie length--

select f1.title, f2.title, f1.length
from film as f1
inner join film as f2
on f1.film_id != f2.film_id 
and f1.length = f2.length;

select * 
from film as f1
inner join film as f2
on f1.film_id = f2.film_id;

