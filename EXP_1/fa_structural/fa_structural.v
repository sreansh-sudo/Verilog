module fa_structural (
    input  wire A, B, Cin,
    output wire Sum, Cout
);
    wire xab, ab, bcin, acin;
 
    xor g1 (xab,  A,   B  );
    xor g2 (Sum,  xab, Cin );
 
    and g3 (ab,   A,   B   );
    and g4 (bcin, B,   Cin );
    and g5 (acin, A,   Cin );
 
    or  g6 (Cout, ab, bcin, acin);
endmodule