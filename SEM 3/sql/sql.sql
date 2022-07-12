create table Sailor
(
   ID INT PRIMARY KEY not null,
   Name varchar(30),
    RATING INT,
    AGE  INT,
    check (Name=upper(name)),
    check (rating in(6,7,8,9,10))
);
create table Boat
(
   ID INT PRIMARY KEY,
   Name varchar(30),
    COLOR varchar(10)

);
create table  Reserves
(
 
  SID INT references Sailor(ID),
  BID  INT references Boat(ID),  
  DAY DATE,
  PRIMARY KEY(SID,BID,DAY)
);
select * from Sailor;
drop table Sailor;
drop table Boat;
drop table  Reserves ;
select * from Boat;

insert into Sailor (id,name, rating, age) values (1,'JACK SPARROW', 10, 40);
insert into Sailor (id,name, rating, age) values (2,'WILL TURNER', 6, 26);

insert into Sailor (id,name, rating, age) values (3,'HORATIO', 7, 24);

insert into Sailor (id,name, rating, age) values (4,'GIBBS', 9, 51);
insert into Sailor (id,name, rating, age) values (5,'DAVY JONES' ,10, 42);
insert into Sailor (id,name, rating, age) values (6,'JULIUS',9, 25);

insert into Boat (id,name, color) values (101,'Black Pearl', 'black');
insert into Boat (id,name, color) values (102,'Queen Annes Revenge', 'red');
insert into Boat (id,name, color) values (103,'Blackbeards Delight', 'black');
insert into Boat (id,name, color) values (104,'Redbeards Delight', 'red');
insert into Boat (id,name, color) values (105,'Oceans Dagger', 'blue');
insert into Boat (id,name, color) values (106,'Marine', 'blue');
insert into Boat (id,name, color) values(107,'Interlake', 'red');

insert into Reserves (sid, bid, day) values (2, 101, '11-FEB-2016');
insert into Reserves (sid, bid, day) values (6, 107, '10-JUN-2016');
insert into Reserves (sid, bid, day) values (1, 101, '10-OCT-2016');
insert into Reserves (sid, bid, day) values (1, 101, '10-OCT-2017');
insert into Reserves (sid, bid, day) values (1, 102, '10-OCT-2017');
insert into Reserves (sid, bid, day) values (1, 101, '10-JUL-2017');
insert into Reserves (sid, bid, day) values (2, 102, '11-SEP-2017');
insert into Reserves (sid, bid, day) values (2, 102, '7-NOV-2017');
insert into Reserves (sid, bid, day) values (3, 101, '7-NOV-2017');
insert into Reserves (sid, bid, day) values (3, 102, '7-AUG-2017');
insert into Reserves (sid, bid, day) values (4, 103, '19-SEP-2017');
insert into Reserves (sid, bid, day) values (6, 104, '19-SEP-2017');
select * from  Reserves ;

select count(*) from boat where color='black';

select r.sid from Reserves r,boat b where r.bid=b.id and b.color in('black','green') group by r.sid;

select id ,name from sailor  where age=(select min(age) from sailor);

select from Reserves r,boat b,sailor s where r.id=s.sid and 
