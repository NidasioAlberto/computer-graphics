#include <stdlib.h>
#include <time.h>

void DrawFigure(A01 *A)
{
	/**************
	 Function A->Plot(float x1, float y1, float r, float g, float b)

	 draws a single point at (x1,y1), colored with the (r,g,b) specified color.
	 The point is addressed in Normalized screen coordinates, (i.e. in range [-1,+1]), following the Vulkan convention.
	 The red, green and blue (r,g,b) values are in the range [0,1].


	 Function A->Line(float x1, float y1, float x2, float y2, float r, float g, float b)

	 draws a segment from point (x1,y1) to point (x2, y2), colored with the (r,g,b) specified color.
	 Starting and ending points are expressed in Normalized screen coordinates, (i.e. in range [-1,+1]),
	 following the Vulkan convention.
	 The red, green and blue (r,g,b) values are in the range [0,1].


	 Function A->Triangle(float x1, float y1, float x2, float y2, float x3, float y3, float r, float g, float b)

	 draws a triangle connecting points (x1,y1)  (x2, y2) and (x3, y3), colored with the (r,g,b) specified color.
	 Vertex are expressed in Normalized screen coordinates, (i.e. in range [-1,+1]), following the Vulkan convention.
	 The red, green and blue (r,g,b) values are in the range [0,1].



	 Using functions Plot(...), Line(...) and Triangle(...) try to draw a simple picture.

	 First remove the ten functions below (given only as an example), and replace them with your own.
	 Please note that there is an upper limit in the number of primitives that can be used (89998). This number
	 xs however huge, and it should not pose any limit, not even for the most complex drawings.

	 WARNING!
	 Since it is a C program, you can use for loops and functions if you think they can be helpful in your solution.
	 However, please include all your code in this file, since it will be put in an automatic correction process
	 for the final evaluation. Please also be cautious when using standard libraries and symbols, since they
	 might not be available in all the development environments (especially, they might not be available
	 in the final evaluation environment, preventing your code from compiling).
	 This WARNING will be valid far ALL THE ASSIGNMENTs, but it will not be repeated in the following texts,
	 so please remember these advices carefully!

	***************/

	float points[7][2] = {
		{0.8, 0.8},
		{0.4, 0.8},
		{0.5, 0.7},
		{0, 0.2},
		{0.2, 0},
		{0.7, 0.5},
		{0.8, 0.4},
	};

	for (int i = 0; i < 7; i++)
	{
		if (i != 6)
		{
			A->Line(points[i][0], points[i][1], points[i + 1][0], points[i + 1][1], 1, 0, 0);
		}
		else
		{
			A->Line(points[i][0], points[i][1], points[0][0], points[0][1], 1, 0, 0);
		}

		A->Plot(points[i][0], points[i][1], 0, 0, 0);
	}

	srand(time(NULL));

	for (int i = 1; i < 6; i++)
	{
		A->Triangle(
			points[0][0], points[0][1],
			points[i][0], points[i][1],
			points[i + 1][0], points[i + 1][1],
			(rand() % 255) / 255.0,
			(rand() % 255) / 255.0,
			(rand() % 255) / 255.0);
	}
}
