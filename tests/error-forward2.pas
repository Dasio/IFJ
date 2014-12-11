var cislo : integer;
    cislo2 : integer;
    desetine : real;
    text : string;


{ foo }

function funkce1( arg1 : real; arg2 : integer ) : integer; forward;

function funkce1( arg1 : real; arg2 : integer ) : integer; forward;

function funkce1( arg1 : real; arg2 : integer ) : integer;
begin
    arg2 := 123.5;
    funkce1 := 123
end;


begin
    cislo := funkce1(1.5, 5)
end.
