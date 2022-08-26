SELECT name
FROM people
JOIN directors on directors.person_id=people_id
JOIN ratings on directors.movie_id=ratings.movie_id
WHERE rating>=9.0;