var cislo : integer;
    cislo2 : integer;
    desetine : real;
    text : string;
    

{ foo }

function funkce2() : integer; forward;

function funkce1( arg1 : real; arg2 : integer ) : integer;
begin
    arg2 := funkce2();
    funkce1 := 123
end;

function funkce2() : integer;
var xyz : real;
begin
    funkce2 := 1
end;

end.
