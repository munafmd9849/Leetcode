# Write your MySQL query statement below
select name from employee a
join (
    select managerID, COUNT(*) AS directreports
    from employee
    group by managerId
    having  count(*)>=5
) b
on a.id=b.managerId

