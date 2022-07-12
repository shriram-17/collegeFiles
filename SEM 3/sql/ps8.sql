-1
select count(*) from boat where color='black';
-2
select r.sid from Reserves r,boat b where r.bid=b.id and b.color in('black','green') group by r.sid;
-3
select id ,name from sailor  where age=(select min(age) from sailor);
-4
select * from Reserves r,boat b, sailor s where r.bid=b.id and r.sid=s.id and b.id=101;
-5
select s.name from sailor s where s.id not in (select sid from Reserves ) order by s.name; 
-6
select b.color from sailor s,boat b, reserves r where r.bid= b.id and r.sid= s.id and s.name ='HORATIO';
-7
select * from sailor s,boat b, reserves r where r.bid= b.id and r.sid= s.id and b.color='red' and s.rating=10;
-8

-9
select id from sailor where rating=(select max(rating)  from sailor);
-10

-11
select b.id ,(select count(*) from reserves r where b.id=r.bid) from boat b;
-12
select DISTINCT(s.name) from sailor s,boat b, reserves r where r.bid= b.id and r.sid= s.id and b.color='red';
-13
select b.id, s.id,count(*) as NoOfReservations from sailor s,boat b, reserves r where r.bid= b.id and r.sid= s.id group by b.id,s.id having count(*)>1 ;
-14
select bid from reserves group by bid having count(*)=(select max(c)from (select count(*) as c from reserves group by bid)t);
-15
select id from sailor where rating >(select rating from sailor where name='GIBBS');
-16
select 
-17
select distinct(s.id) from sailor s,boat b, reserves r where r.bid= b.id and r.sid= s.id and b.color not in('red') ;
-21
select distinct(s.name) from sailor s,boat b, reserves r where r.bid= b.id and r.sid= s.id and b.color in('red') group by s.name ;
-22
select distinct(s.name) from sailor s,boat b, reserves r where r.bid= b.id and r.sid= s.id  group by s.name having count(*)>0;
-23
select distinct(s.id) from sailor s,boat b, reserves r where r.bid= b.id and r.sid= s.id and (b.id=103 or rating>8);
-24

-25
select distinct(s.name) from sailor s,boat b, reserves r where r.bid= b.id and r.sid= s.id  group by s.name having count(*)>2;
-26
select s.id ,(select count(*) from reserves r where s.id=r.sid) from sailor s;
-27
