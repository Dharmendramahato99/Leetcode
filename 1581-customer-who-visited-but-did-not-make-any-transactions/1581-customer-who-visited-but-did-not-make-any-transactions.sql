# Write your MySQL query statement below
select Visits.customer_id,COUNT(Visits.visit_id) as count_no_trans from Visits Left JOIN Transactions
ON Visits.visit_id = Transactions.visit_id Where Transactions.transaction_id IS NULL
GROUP BY Visits.customer_id;





