var cislo : integer;
    cislo2 : integer;
    desetine : real;
    text : string;


{ foo }

function funkce1( arg1 : real; arg2 : integer ) : integer; forward;

function funkce1( arg1 : integer; arg2 : real ) : integer;
begin
    arg2 := 123.5;
    funkce1 := 123
end;


begin
    cislo := funkce1(5, 1.5)
end.
