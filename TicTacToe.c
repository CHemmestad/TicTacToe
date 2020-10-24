#include <stdio.h>

void Game ( int pos1 , int pos2 , int pos3 ,
					 int pos4 , int pos5 , int pos6 ,
					 int pos7 , int pos8 , int pos9 ) ;
					 
int main ( ) {
	int sleep ( ) ;
	int system ( ) ;

	int spots ;
	
	int slot1 = 10 ; int slot1mem = 0 ;
	int slot2 = 10 ; int slot2mem = 0 ; 
	int slot3 = 10 ; int slot3mem = 0 ;
	int slot4 = 10 ; int slot4mem = 0 ;
	int slot5 = 10 ; int slot5mem = 0 ;
	int slot6 = 10 ; int slot6mem = 0 ;
	int slot7 = 10 ; int slot7mem = 0 ;
	int slot8 = 10 ; int slot8mem = 0 ;
	int slot9 = 10 ; int slot9mem = 0 ;
	
	int plays = 1 ;
	int XorO = 2 ;
		
	int Xwins = 0 ;
	int Owins = 0 ;
	
	char playAgain ;

newGame :
	
	printf ( "Player 1 - %d Player 2 - %d\n" , Xwins , Owins ) ;
	sleep ( 1 ) ;
	if ( XorO == 2 ) {
		printf ( "Player 1 starts\n" ) ;
	}
	else
	printf ( "Player 2 starts\n" ) ;
	sleep ( 2 ) ;
	
game :
	
	Game ( slot1 , slot2 , slot3 , slot4 , slot5 , slot6 , slot7 , slot8 , slot9 ) ;
	
	if ( XorO == 2 ) {
		XorO-- ;
	} else
	XorO++ ;
	
	while ( plays <= 10 ) {
		if ( (slot1 + slot2 + slot3) == 3 || (slot3 + slot6 + slot9) == 3 || (slot9 + slot8 + slot7) == 3
		|| (slot1 + slot4 + slot7) == 3 || (slot1 + slot5 + slot9) == 3 || (slot3 + slot5 + slot7) == 3 ) {
			Xwins++ ;
			printf ( "Player 1 wins!\n" ) ;
			printf ( "Play again? Y/N : " ) ;
			goto end ;
		}
		else if ( (slot1 + slot2 + slot3) == 6 || (slot3 + slot6 + slot9) == 6 || (slot9 + slot8 + slot7) == 6
		|| (slot1 + slot4 + slot7) == 6 || (slot1 + slot5 + slot9) == 6 || (slot3 + slot5 + slot7) == 6 ) {
			Owins++ ;
			printf ( "Player 2 wins!\n" ) ;
			printf ( "Play again? Y/N : " ) ;
			goto end ;
		}
		else if ( plays == 10 ) {
			printf ( "Cat!\n" ) ;
			printf ( "Play again? Y/N : " ) ;
			goto end ;
		}
top :
		if ( XorO == 1 ) {
			printf ( "It's Player 1's turn. Pick a number from 1 to 9 : " ) ;
		} else
		printf ( "It's Player 2's turn. Pick a number from 1 to 9 : " ) ;
		
		scanf ( "%d" , &spots ) ;
		switch ( spots ) {
			case 1 :
				slot1mem++ ;
				if ( slot1mem > 1 ) {
					printf ( "Can't go there\n" ) ;
					goto top ;
				}
				slot1 = XorO ;
				plays++ ;
				goto game ;
				break ;
			case 2 :
				slot2mem++ ;
				if ( slot2mem > 1 ) {
					printf ( "Can't go there\n" ) ;
					goto top ;
				}
				slot2 = XorO ;
				plays++ ;
				goto game ;
				break ;
			case 3 :
				slot3mem++ ;
				if ( slot3mem > 1 ) {
					printf ( "Can't go there\n" ) ;
					goto top ;
				}
				slot3 = XorO ;
				plays++ ;
				goto game ;
				break ;
			case 4 :
				slot4mem++ ;
				if ( slot4mem > 1 ) {
					printf ( "Can't go there\n" ) ;
					goto top ;
				}
				slot4 = XorO ;
				plays++ ;
				goto game ;
				break ;
			case 5 :
				slot5mem++ ;
				if ( slot5mem > 1 ) {
					printf ( "Can't go there\n" ) ;
					goto top ;
				}
				slot5 = XorO ;
				plays++ ;
				goto game ;
				break ;
			case 6 :
				slot6mem++ ;
				if ( slot6mem > 1 ) {
					printf ( "Can't go there\n" ) ;
					goto top ;
				}
				slot6 = XorO ;
				plays++ ;
				goto game ;
				break ;
			case 7 :
				slot7mem++ ;
				if ( slot7mem > 1 ) {
					printf ( "Can't go there\n" ) ;
					goto top ;
				}
				slot7 = XorO ;
				plays++ ;
				goto game ;
				break ;
			case 8 :
				slot8mem++ ;
				if ( slot8mem > 1 ) {
					printf ( "Can't go there\n" ) ;
					goto top ;
				}
				slot8 = XorO ;
				plays++ ;
				goto game ;
				break ;
			case 9 :
				slot9mem++ ;
				if ( slot9mem > 1 ) {
					printf ( "Can't go there\n" ) ;
					goto top ;
				}
				slot9 = XorO ;
				plays++ ;
				goto game ;
				break ;
			default :
				printf ( "INVALID\n" ) ;
				getchar ( ) ;
				goto top ;
				break ;
		}
	}
	printf ( "Play again? Y/N : " ) ;
end :
	scanf ( "%c" , &playAgain ) ;
	switch ( playAgain ) {
		case 'Y' : case 'y' :
			slot1 = 10 ; slot1mem = 0 ;
			slot2 = 10 ; slot2mem = 0 ; 
			slot3 = 10 ; slot3mem = 0 ;
			slot4 = 10 ; slot4mem = 0 ;
			slot5 = 10 ; slot5mem = 0 ;
			slot6 = 10 ; slot6mem = 0 ;
			slot7 = 10 ; slot7mem = 0 ;
			slot8 = 10 ; slot8mem = 0 ;
			slot9 = 10 ; slot9mem = 0 ;
			plays = 1 ;
			if ( XorO == 2 ) {
				XorO = 1 ;
			}
			else 
			XorO = 2 ;
			playAgain = '\0' ;
			goto newGame ;
			break ;
		case 'N' : case 'n' :
			goto endGame ;
			break;
		default :
			goto end ;
			break ;
	}
	endGame :
	return 0 ;
}

void Game ( int pos1 , int pos2 , int pos3 ,
					 int pos4 , int pos5 , int pos6 ,
					 int pos7 , int pos8 , int pos9 ) {
	
	char ticGrid [ 23 ] [ 41 ] ;
	int x ;
	int y ;
	
	for ( x = 0 ; x <= 22 ; x++ ) {
		for ( y = 0 ; y <= 40 ; y++ ) {
			ticGrid [ x ] [ y ] = ' ' ;
			if ( x == 7 || x == 15 ) {
				ticGrid [ x ] [ y ] = '-' ;
			}
		}
	}
	for ( x = 0 ; x <= 22 ; x++ ) {
		for ( y = 0 ; y <= 40 ; y++ ) {
			if ( y == 13 || y == 27 ) {
				ticGrid [ x ] [ y ] = '|' ;
			}
		}
	}

//down d+8 right r+14
	int i ;
	int r ;
	int d ;
	
	for ( i = 1 ; i <= 9 ; i++ ) {
//1
			if ( i == 1 ) {
				r = 0 ;
				d = 0 ;
				if ( pos1 == 0 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							ticGrid [ x ] [ y ] = ' ' ;
						}
					}
				}
				if ( pos1 == 1 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (4+r) || y == (8+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (6+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
						}
					}
				}
				if ( pos1 == 2 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (5+r) || y == (7+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
						}
					}
				}
			}
//2
			if ( i == 2 ) {
				r = 14 ;
				d = 0 ;
				if ( pos2 == 0 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							ticGrid [ x ] [ y ] = ' ' ;
						}
					}
				}
				if ( pos2 == 1 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (4+r) || y == (8+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (6+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
						}
					}
				}
				if ( pos2 == 2 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (5+r) || y == (7+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
						}
					}
				}
			}
//3
			if ( i == 3 ) {
				r = 28 ;
				d = 0 ;
				if ( pos3 == 0 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							ticGrid [ x ] [ y ] = ' ' ;
						}
					}
				}
				if ( pos3 == 1 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (4+r) || y == (8+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (6+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
						}
					}
				}
				if ( pos3 == 2 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (5+r) || y == (7+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
						}
					}
				}
			}
//4
			if ( i == 4 ) {
				r = 0 ;
				d = 8 ;
				if ( pos4 == 0 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							ticGrid [ x ] [ y ] = ' ' ;
						}
					}
				}
				if ( pos4 == 1 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (4+r) || y == (8+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (6+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
						}
					}
				}
				if ( pos4 == 2 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (5+r) || y == (7+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
						}
					}
				}
			}
//5
			if ( i == 5 ) {
				r = 14 ;
				d = 8 ;
				if ( pos5 == 0 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							ticGrid [ x ] [ y ] = ' ' ;
						}
					}
				}
				if ( pos5 == 1 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (4+r) || y == (8+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (6+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
						}
					}
				}
				if ( pos5 == 2 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (5+r) || y == (7+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
						}
					}
				}
			}
//6
			if ( i == 6 ) {
				r = 28 ;
				d = 8 ;
				if ( pos6 == 0 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							ticGrid [ x ] [ y ] = ' ' ;
						}
					}
				}
				if ( pos6 == 1 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (4+r) || y == (8+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (6+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
						}
					}
				}
				if ( pos6 == 2 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (5+r) || y == (7+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
						}
					}
				}
			}
//7
			if ( i == 7 ) {
				r = 0 ;
				d = 16 ;
				if ( pos7 == 0 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							ticGrid [ x ] [ y ] = ' ' ;
						}
					}
				}
				if ( pos7 == 1 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (4+r) || y == (8+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (6+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
						}
					}
				}
				if ( pos7 == 2 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (5+r) || y == (7+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
						}
					}
				}
			}
//8
			if ( i == 8 ) {
				r = 14 ;
				d = 16 ;
				if ( pos8 == 0 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							ticGrid [ x ] [ y ] = ' ' ;
						}
					}
				}
				if ( pos8 == 1 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (4+r) || y == (8+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (6+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
						}
					}
				}
				if ( pos8 == 2 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (5+r) || y == (7+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
						}
					}
				}
			}
//9
			if ( i == 9 ) {
				r = 28 ;
				d = 16 ;
				if ( pos9 == 0 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							ticGrid [ x ] [ y ] = ' ' ;
						}
					}
				}
				if ( pos9 == 1 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (4+r) || y == (8+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (6+r) ) {
									ticGrid [ x ] [ y ] = 'X' ;
								}
							}
						}
					}
				}
				if ( pos9 == 2 ) {
					for ( x = (0+d) ; x <= (6+d) ; x++ ) {
						for ( y = (0+r) ; y <= (12+r) ; y++ ) {
							if ( x == (0+d) || x == (6+d) ) {
								if ( y == (5+r) || y == (7+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (1+d) || x == (5+d) ) {
								if ( y == (2+r) || y == (10+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (2+d) || x == (4+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
							if ( x == (3+d) ) {
								if ( y == (1+r) || y == (11+r) ) {
									ticGrid [ x ] [ y ] = 'O' ;
								}
							}
						}
					}
				}
			}			
		}
		for ( x = 0 ; x <= 22 ; x++ ) {
			for ( y = 0 ; y <= 40 ; y++ ) {
				printf ( "%c" , ticGrid [ x ] [ y ] ) ;
			}
			printf ( "\n" ) ;
		}
	}

	


