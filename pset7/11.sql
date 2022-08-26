SELECT DISTINCT name
FROM people JOIN stars ON people.id = stars.person_id
JOIN ratings on ratings.movie_id=stars.movies_id
JOIN movies on movie.id=stars.movies_id
WHERE name ="chadwick Boseman"
ORDER by rating DESC
LIMIT 5;