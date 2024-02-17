mother_of(edith, dick). 
mother_of(edith, tom).
mother_of(sadie, calvin). 
mother_of(sadie, alice). 
mother_of(gertie, john_benford). 
mother_of(sadie, floyd). 

mother_of( tina, emily).
mother_of(maria ,ari ).
mother_of(gloria , joe).
mother_of( reyna, kim ).

father_of(floyd, tom). 
father_of(john_h, alice). 
father_of(john_r, vivian). 
father_of(john_r, edith). 
father_of(tom, sarah). 
father_of(tom, rachel). 
father_of(tom, andrew). 

father_of(charles ,emily ).
father_of(drew ,andrew ).
father_of(jake ,thomas ).
father_of(clark , esteban).

grandparent(X,Y):-
grandmother(X, Y),
grandfather(X,Y).

person(name(jason, zimmerman, mew2king), pro_gamer, 29). 
person(name(michael, jordan,not_available), athlete, 55). 
person(name(michael_b, jordan,not_available), black_panther, 31). 
person(name(johnathan, wendel, fatal1ty), pro_gamer, 37). 
person(name(ryan, nyquist,not_available), athlete, 39). 
person(name(daniel, craig,not_available), james_bond, 50). 
person(name(emma, coburn,not_available), athlete, 27). 
person(name(shaun, white,not_available), athlete, 31).

age(Firstname, Lastname, Age) :- 
    person(name(Firstname, Lastname, _), _, Age).

gamertag(Firstname, Lastname, Tag) :- 
    person(name(Firstname, Lastname, Tag), pro_gamer, _).

jobtitle(Firstname, Lastname, Job) :- 
    person(name(Firstname, Lastname, _), Job, _).

addnumbers(R,S):-
    write('Enter a number: '),
    read(R),
    number(R),
    write('Enter another number: '),
    read(S),
    number(S),
    T is R+S.