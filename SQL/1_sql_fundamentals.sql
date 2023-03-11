SELECT first_name,last_name,email from customer;
select * from film;



Select distinct (release_year) from film;
Select distinct (rental_rate) from film;
Select distinct (rating) from film;


select * from payment;
select count(*) from payment;
select distinct amount from payment;
select count(distinct amount) from payment;



select * from film 
where rental_rate > 4 and replacement_cost > 19.99 ;

select count(*) from film 
where rental_rate > 4 and replacement_cost > 19.99 ;

select * from film
where rating !='R';

select phone from address 
where address='259 Ipoh Drive';



select * from customer 
order by first_name;

select store_id,first_name,last_name from customer
order by store_id asc,first_name desc;




select * from payment 
order by payment_date desc
limit 5;

select * from payment 
where amount!=0.00
order by payment_date desc
limit 5;



select customer_id,payment_date from payment
order by payment_date asc
limit 10;

select title,length from film
order by length desc
limit 5;

select count(title) from film
where length<50;





select * from payment
where amount  between 6 and 9;

select * from payment 
where amount not between 6 and 9
order by amount desc;

select * from payment 
where amount between 6 and 9
order by amount desc;

select count(*) from payment 
where amount not between 6 and 9;

select amount,COUNT(*) from payment 
where amount not between 6 and 9
group by amount;

select * from payment 
where payment_date between '2007-02-01' and '2007-02-15';



select * from payment
where amount in (0.99,198);

select * from payment
where amount not in (0.99,1.98) 
order by amount desc;

select * from customer
where first_name in ('Jake','Julie','John');




select * from customer 
where first_name like 'J%' and last_name like 'S%';

select * from customer
where first_name like '%her%';

select * from customer
where first_name like 'A%' and last_name not like 'B%'
order by last_name;




select count(*) from actor
where first_name like 'A%';

select count(distinct(district)) from address;