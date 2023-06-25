library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity Hamming is 
	port (message: in std_logic_vector(15 downto 0);
		  clk : in std_logic;
		  y : out std_logic_vector(15 downto 0));
end Hamming ;

architecture Ham of Hamming is 
	signal i,h : natural range 0 to 15 ;
	signal state,j : unsigned( 3 downto 0);
	begin
	process(i,j,message)
		begin
		if (clk'event and clk = '1') then  
				if message(i) = '1' then 
					state <= state XOR j ;
				end if ;
				i <= i + 1;
				j <= j + 1;
		end if ;
		h <= to_integer(state);
		y <= message ;
		y(h) <= not message(h);
	end process;
end Ham ;