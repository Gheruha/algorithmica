-- LEET EASY - Customer placing the biggest nr of orders
-- 1. Select customer_number, group by, count the rows
-- 2. Return order by count desc limit 1
SELECT
  customer_number
FROM
  Orders
GROUP BY
  customer_number
ORDER BY
  COUNT(*) DESC
LIMIT
  1;
