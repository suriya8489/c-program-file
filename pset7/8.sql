SELECT name
FROM people JOIN stars ON people.id = stars.person_id
JOIN movies on movie.id=stars.movies_id
WHERE title="toy story";
--joining three tables based on certain ids