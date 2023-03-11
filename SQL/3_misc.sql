select amount as rental_price
from payment;

select customer_id, sum(amount) as total_spent
from payment
group by customer_id
having sum(amount)>100;

select customer_id as new_name,amount
from payment
where amount > 2;