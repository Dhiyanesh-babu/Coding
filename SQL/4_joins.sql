-- inner join --

select payment_id, payment.customer_id, first_name from payment
inner join customer
on payment.customer_id = customer.customer_id;

--full outer join--
-- make sure all customer info asociated with transactions and all transactions asociated with customer info--

select * from customer
full outer join payment
on customer.customer_id = payment.customer_id
where customer.customer_id is null
or payment.payment_id is null;

select count(distinct customer_id) from customer;
select count(distinct customer_id) from payment;

--left outer join--
-- film id that is there in film table but not present in inventory--

select * from film;
select * from inventory;

select film.film_id, title, inventory_id, store_id
from film
left outer join inventory 
on inventory.film_id = film.film_id
where inventory.film_id is null;

--challenge--
--1 customers who live in california--

select * from customer;
select * from address;

select district,email 
from customer
inner join address
on customer.address_id = address.address_id
where district = 'California';

--2 list of all movies Nick Wahlberg has been in--
-- tables - actor, film, film_actor --

select * from actor;
select * from film;
select * from film_actor;

select title, first_name, last_name 
from film_actor 
inner join film 
on film_actor.film_id = film.film_id
inner join actor
on film_actor.actor_id = actor.actor_id
where first_name = 'Nick' and last_name = 'Wahlberg';
