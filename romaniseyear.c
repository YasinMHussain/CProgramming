/* Convert given year into its roman equivalent */

#include <stdio.h>

romanise (int, int, char);
main()
{

	int yr;
	printf("\nEnter year: ");
	scanf("%d", &yr);
	yr = romanise (yr, 1000, 'm'); 
	yr = romanise (yr, 500, 'd'); 
	yr = romanise (yr, 100, 'c'); 
	yr = romanise (yr, 50, '1'); 
	yr = romanise (yr, 10, 'x'); 
	yr = romanise (yr, 5, 'v'); 
	romanise (yr, 1, 'i'); 
	return 0;

} 

romanise (int y, int k, char ch)
{

	int i, j; 
	j=y/k; 
	for (i=1;i<=j; i++) 
		printf ("%c", ch); 
	return (y-k*j);

}
