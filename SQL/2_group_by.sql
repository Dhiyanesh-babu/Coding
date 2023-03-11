--aggregate functions--

select * from film;
select min(replacement_cost),max(replacement_cost) from film;
select count(*) from film;
select avg(replacement_cost) from film;
select round(avg(replacement_cost),3) from film;
select sum(replacement_cost) from film;


--group by--

select * from payment;

select customer_id,sum(amount)from payment 
group by customer_id;

select customer_id,sum(amount)from payment 
group by customer_id order by customer_id;

select customer_id,sum(amount)from payment 
group by customer_id order by sum(amount) desc;

select customer_id,count(amount)from payment 
group by customer_id order by count(amount) desc;

select staff_id,customer_id,sum(amount) from payment 
group by staff_id,customer_id order by customer_id,staff_id;

select date(payment_date),sum(amount) from payment
group by date(payment_date) order by sum(amount);

select customer_id,staff_id,sum(amount)
from payment
where staff_id in (2)
group by customer_id,staff_id;

select customer_id,staff_id,sum(amount)
from payment
where staff_id in (2)
group by customer_id,staff_id
order by sum(amount)
limit 5;


--having--

select * from payment;

select customer_id,sum(amount) from payment
where customer_id not in (1,2,3) group by customer_id having sum(amount)>100
order by customer_id,sum(amount);

select store_id,count(customer_id) from customer
group by store_id having count(customer_id)>300;

select customer_id,sum(amount) from payment 
where staff_id=2 group by customer_id having sum(amount)>100;
