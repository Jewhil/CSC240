
% 1. parent_of(X, floyd).


% parent_of(X, alice),
%    parent_of(X, calvin).

% parent_of(X, _).

female(jane).
female(mary).
female(clare).
female(vivian).
female(alice).
female(sarah).
female(rachel).
male(floyd).
male(tom).
male(richard).
male(calvin).
male(john).
male(andrew).
parent_of(tom, richard).
parent_of(tom, jane).
parent_of(mary, calvin).
parent_of(mary, alice).
parent_of(clare, john).
parent_of(clare, tom).
parent_of(john, alice).
parent_of(john, calvin).
parent_of(richard, vivian).
parent_of(richard, floyd).
parent_of(jane, sarah).
parent_of(jane, rachel).
parent_of(jane, andrew).

%rule a
grandparent_of(X, Z):-
parent_of(X, Y),
parent_of(Y, Z).

%rule b
mother_of(X,Y):-
parent_of(X, Y), 
female(X).

grandmother_of(X,Z):-
parent_of(X,Y),
parent_of(Y,Z),
female(X).
%rule c
sibling_of(X,Y):-
parent_of(Z,X),
parent_of(Z,Y).
%rule d
brother_of(X,Y):-
parent_of(Z,X),
parent_of(Z,Y),
male(X).
%rule e
uncle_of(X,Z):-
brother_of(X,Y),
parent_of(Y,Z).