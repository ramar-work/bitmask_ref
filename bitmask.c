#include <stdio.h>
#include <stdlib.h>

//ssl and not, eventually, you may want to store other data
#define MASK 0x2

//this program exists to test out bitmask against short ints
int main ( int argc, char *argv[] ) {
	

	srand( 7234921 );
fprintf( stderr, "%d\n", MASK );
#if 1
	int ints[ 6 ] = { 1, 234, 65536, 777, 8089, 9100 };
	//Here you get a number and add either a 1 or 0 to it's highest bit? (or the max short 65536)
	for ( int i=0; i<sizeof( ints )/sizeof( int ); i++ ) {

		//shift right and add some info
fprintf( stderr, "%d, ", ints[ i ] );
		ints[ i ] <<= 2;
		ints[ i ] ^= rand() % 3;
fprintf( stderr, "%d\n", ints[ i ] );

		//apply either mask randomly
	}

	//Here we should extract each number and it should look the same, in addition to having the bit we want
	for ( int i=0; i<sizeof( ints )/sizeof( int ); i++ ) {
		int flag = ints[ i ] ^ ( ( ints[i] >> 2 ) << 2 );
fprintf( stderr, "%d, %d\n", flag, ints[ i ] >>= 2 );


//fprintf( stderr, "%d, %d, %d, %d\n", ints[ i ], bints[ i ] >> 1, bints[ i ] & MASK, bints[ i ] );
	}
#endif
}
