# Write your MySQL query statement below
SELECT customer_id from Customer GROUP BY customer_id HAVING COUNT(DISTINCT product_key) = (SELECT COUNT(product_key) FROM product);
