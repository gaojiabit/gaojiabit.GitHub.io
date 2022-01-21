
[back to home](https://gaojiabit.github.io/)
# matrix
1. Definition
  - A matrix is a rectangular array of numbers.矩阵就是一个数字的矩形数组。
  - The horizontal and vertical lines of entries in a matrix are called rows and columns, respectively.
  - Overview of a matrix size

| Name	| Size	| Description	|
| :---: | :---:  | :---	|
| Row vector    | 1 x n | A matrix with one row, sometimes used to represent a vector	    |
| Column vector | n x 1 | A matrix with one column, sometimes used to represent a vector	|
| Square matrix | n x n | A matrix with the same number of rows and columns, sometimes used to represent a linear transformation from a vector space to itself, such as reflection, rotation, or shearing.|

2. Basic operations
	- Addition, scalar multiplication, and transposition
	- Matrix multiplication
	- Submatrix  通过删除行或者列的方式获得子矩阵
3. Linear equations
	- inverse matrix
4. Linear transformations
	- Horizontal shear  
	- Reflection through the vertical axis
	- Squeeze mapping
	- Scaling
	- Rotation
	- 一个2阶方阵 { TR[a,b],TR[c,d]} 相当于将一个单位正方形变为一个平行四边形
	![](512px-Area_parallellogram_as_determinant.svg.png)
5. Square matrix 方阵
	- Main types
		- Diagonal and triangular matrix  对角阵和三角阵
		- Identity matrix 单位阵
		- Symmetric or skew-symmetric matrix 对称和斜对称阵  转置和本身相等或者相反
		- Invertible matrix and its inverse
		- Definite matrix
			- Positive definite matrix
			- negative-definite
			- Indefinite matrix 非定
		- Orthogonal matrix 正交矩阵