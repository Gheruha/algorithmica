-- LEETCODE EASY: Not boring movies.
SELECT id, movie, description, rating
FROM Cinema
WHERE id % 2 != 0 AND description != "boring"
ORDER BY rating DESC;
