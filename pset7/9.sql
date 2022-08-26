SELECT DISTINCT name
FROM people JOIN stars ON people.id = stars.person_id
JOIN movies on movie.id=stars.movies_id
WHERE year=2004
ORDER BY birth;