-- LEETCODE EASY: Problem 595 BIG COUNTRIES
-- 1. select name, population, area
-- 2. verify area 
-- 3. verify population
-- 4. return based on area or population
SELECT
  name,
  population,
  area
FROM
  World
WHERE
  population >= 25000000
  OR area >= 3000000;
