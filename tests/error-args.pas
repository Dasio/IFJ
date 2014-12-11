var cislo : integer;
    cislo2 : integer;
    desetine : real;
    text : string;
    

{ foo }

function funkce2() : integer; forward;

function funkce1( arg1 : real; arg2 : integer ) : integer;
begin
    write( arg1, cislo);

    for cislo := 1 to 15 do
    begin
        funkce1 := 2
    end
end;

function funkce2() : integer;
var xyz : real;
begin
    funkce2 := 1;
    text[1] := 'A';
    write( -7-4 );
    while False do begin
        funkce2 := funkce2( );
        desetine := desetine - 15
    end;
    funkce2 := funkce1( 1234, 5, cislo)
end;

function funkce3( arg1 : integer ) : integer;
var var1 : integer;
begin
    write( arg1 );
    if arg1 = 5 then begin
        arg1 := 5+var1;
        var1 := funkce2();
        repeat
            var1 := (arg1 +  5) * funkce1(1.2, 123);
        until False
    end else begin
        arg1 := -arg1*5
    end;
    funkce3 := 2
end;

begin
    cislo := 7;
    cislo := funkce1( 1.25, 6);
    if cislo = 2 then begin
        cislo := 3;
        desetine := 1.25
    end;
    text := 'foo fooo bar s hooooooooooooooooooooooooooooooooooooooooooodne dlooooooooooooooooooooooooooooooooooohym texteeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeem';

    cislo := text[1]

    {case cislo of
        1 : funkce2( );
        4 : begin
            cislo2 := 15;
            funkce2();
        end;
        5 : funkce3(cislo2);
        else
            funkce2();
    end;}
end.
