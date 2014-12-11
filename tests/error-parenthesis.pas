var cislo : integer;
    cislo2 : integer;
    desetine : real;
    text : string;


{ foo }

function funkce2( foo : integer) : integer; forward;

function funkce1( arg1 : real; arg2 : integer ) : integer;
begin
    funkce1 := 123
end;

function funkce2( foo : integer) : integer;
var xyz : real;
begin
    funkce2 := 1;
    foo := 123
end;

begin
    cislo := funkce1(123.5, funkce2( funkce1(123.5, funkce2(funkce1(123.5, funkce2(funkce1(123.5, funkce2(funkce1(123.5, funkce2(funkce1(123.5, funkce2(funkce1(123.5, funkce2(funkce1(123.5, funkce2(123)))))))))))))))

end.
