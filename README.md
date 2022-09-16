# Efficient Computational Algorithms SA 2022-2023
Michael Multerer, Wei Huang, and Davide Baroli.

Materials:

* B. A. Cipra. The Best of the 20th Century: Editors Name Top 10 Algorithms.
* H. Harbrecht and M. Multerer. Algorithmische Mathematik (in German :-)).

<p align="center">
  <img width="700" height="300" src="https://github.com/weiwongg/eca/blob/main/running-cheetah.jpg">
</p>

## 1. Sorting Algorithms
In many applications it is useful to sort a vector of length $n$, for example the numerically stable computation of inner products. The simplest algorithm to sort a vector is the bubblesort algorithm, which compares and swaps the elements of a vector pairwise. Although this algorithm is quite simple, it is often unsuitable in practice due to its complexity of $O(n^2)$. The most efficient sorting algorithms used today are Quicksort and Mergesort. In general, one can compute a lower bound for the complexity of algorithms based on comparisons. This suggests that the mergesort is asymptotically optimal.

### References:

* B. Korte and J. Vygen. Combinatorial Optimization.
* T. H. Cormen, C. E. Leierson, R. L. Rivest, and C. stein. Introduction to Algorithms.

## 2. Integer Relation Detection
Find a non-zero vector of integer $(a_1,\cdots,a_n)$ such that 
$$a_1x_1+a_2x_2+\cdots+a_nx_n = 0,$$
where $x=(x_1,\cdots,x_n)$ is a vector of real or complex numbers. Such problem is well known as integer relation detection. If $n=2$, it could be solved by the Euclidean algorithm. The problem with larger $n$ was firstly solved by Helaman Ferguson and Rodney Forcade in 1977. Despite the simplicity of the mathematical representation of this problem, it is widely used to find new interesting patterns in number theory, quantum field theory, and chaos theory. Don't you want to use this simple but powerful tool to discovery new principles of nature?

### References:

* D. H. Bailey. Integer Relation Detection.

## 3. Spectral Clustering
Graph partitioning is heavily used in domain decomposition and social community detection. If the considering graph is in a coordinate system, there exist simpler methods, for example recursive coordinate bisection and inertial partitioning. However, these methods totally fail for hypergraphs. This is why spectral clustering method comes in which also work for general graphs without nodal coordinate. This method is inspired by vibrating string. The label of node is determined by the sign of the corresponding element in the second smallest eigenvector of the graph Laplacian matrix (also called Fiedler eigenvector). 

### References:

* M. Fiedler. Algebraic connectivity of graphs.
* A. Pothen, H. D. Simon, and K. Liou. Partitioning sparse matrices with eigenvectors of graphs.

## 4. Nested Dissection
Cholesky algorithm is a direct method for solving any symmetric positive definite system $Ax=b$, which is a modified version of Gaussian elimination. However, the resulting lower triangular matrix $L$ could be potentially dense due to newly added non-zero fill-ins, which would increases the amount of storage and computation. The amount of fill-ins depends on order in which variables are eliminated. The nested dissection is one way to obtain a good order based on graph model. One can think of the sparse matrix as a connectivity matrix and therefore build a graph. Then, the graph can be recursively splited into pieces using proper separators, and we finally numbering the nodes in separators last. Such heuristic limit the number of the fill-ins effectively.

### References:

* A. George. Nested Dissection of a Regular Finite Element Mesh.

## 5. 

## 6. Simplex Method for Linear Programming
A linear program is a problem of finding the optimal solution such that the target function can achieve the largest or smallest under some linear constraints. The simplex method was invented by George Dantzig for solving the linear program by hand in 1940s. It is based on the observation that the optimal solution would exit on the corner or boundary of the graph defined by the contrains. In the standard simplex method, one needs to convert the linear problem to a standard form introducing slack variables when needed. Finally, the optimal solution can be found using simplex tableau and pivot operations. 

### References:

* K. Murty. Linear programming.

## 7. Gradient Descent and Stochastic Gradient Descent
The gradient descent is a first order optimization method, which is based on the fact that function value decreases fastest along the opposite direction of its gradient. In spite of its simplicity, it is successfully used to train various neural networks, e.g., fully connected neural networks, convolutional neural network, and recurrent neural network. Their gradients are computed by the so-called backpropagation algorithm. In order to speed up the convergence process, there are many variants of gradient descent invented, for example, batch gradient descent, stochastic gradient descent, and Adam algorithm.

### References:

* I. Goodfellow, Y. Bengio, and A. Courville. Deep Learning.

## 8. Monte Carlo Method
The Monte Carlo method is a method for sampling from a random variable or a stochastic process and computing further quantities of interests. Such simulation method is quite useful especially when no exact analytic method or even finite numerical algorithm is available. The foundamental of the sampling on computers is random number generation. Unfortunately, most computers can only generate pseudo-random numbers using PRNGs algorithm which is determined by a seed. For a given random variable one can sample from its distributions with the inverse transform method. For a given stochastic processes, e.g., Markov chain or Brown motion, one can employ the Metropolis-Hastings algorithm. In applications, the Monte Carlo method is heavily used to simulate queuing systems seen as markov chain, and stock price movement seen as geometric Brownian motion.

### References:

* M. L. Rizzo. Statistical Computing with R.

## 9. Multilevel Monte Carlo method

## 10. Krylov Subspace Iteration Methods
Important methods for the numerical solution of eigenvalue problems and systems of linear equations, such as the Lanczos or the CG method are based on the projection onto a Krylov subspace. Given a matrix $A\in\mathbb{R}^{n\times n}$ and a vector $\boldsymbol{v}\in \mathbb{R}^n, n\in N$, the Krylov space is defined according to $\mathcal{K}_m(A,\boldsymbol{v}):=\{\boldsymbol{v},Av,\cdots,A^{m-1}\boldsymbol{v}\}$. Of particular interest are the approximation properties of these subspaces and the relation between them.

### References:
* Y. Saad. Numerical methods for large eigenvalue problem.
* G. H. Golub and C. F. van Loan. Matrix Computation.

## 11. QR Algorithm for Computing Eigenvalues
The QR algorithm is one of the most popular iterative methods for computing eigenvalues of general matrices $A$. We initialize $B$ with $A$ and then repeatedly update the matrix $B$ with the product $RQ$, where $Q$ and $R$ are obtained by the QR decomposition of $B$ at the previous step. As the iteration goes, it will eventually converge to an upper triangular matrix of which the diagonal is the eigenvalue vector of the original matrix $A$. Due to the large time complexity of the classical QR algorithm, the shift QR algorithm with Hessenberg reduction is more often used in practice.

### References:
* J. G. F. Francis. The QR Transformation—Part 1 and Part 2.
* G. H. Golub and C. F. van Loan. Matrix Computation.

## 12. Singular value decomposition (SVD)
The SVD of an $n\times m$ matrix $A$ of rank $r$ is the decomposition into a product of three matrices
$$A = U\Sigma V^T,$$
where $U$ is a unitary $n\times n$ matrix, $V$ is the adjoint of a unitary $m\times m$ matrix, and $\Sigma$ is a $n\times m$ matrix in the form 
$$\Sigma = [D,\boldsymbol{0};\boldsymbol{0},\boldsymbol{0}].$$
The $r\times r$ matrix $D$ is a diagonal matrix and its diagonal entries are $\sigma_1,\cdots,\sigma_r$ called singularnvalues. In particular, $\sigma_1\geq\sigma_2\geq\cdots\geq\sigma_r.$ With the help of the SVD, it is possible to calculate both in the spectral norm as well as in the Frobenius norm the best rank-k approximation to $A$.

### References:
* C. Eckart and G. Young. The approximation of one matrix by another of lower rank.

## 13. Adaptive cross approximation
The adaptive cross approximation is a method for the approximation of asymptotically smooth functions. These are bivariate functions $f(x,y)$ whose derivatives off the diagonal $x=y$ exhibit a certain decay behavior. It can be shown that these functions can be partitioned in such a way that individual low-rank regions can be approximated. The actual algorithm is then based on a partially pivoted Gaussian algorithm with a corresponding adaptivee decay criterion.

### References:

* M. Bebendorf. Approximation of boundary element matrices.
* M. Bebendorf. Hierarchical Matrices.

## 14. Randomized Low-rank Approximation
A very simple class of low rank approximation of a matrix is obtained by using the product of the matrix and random vectors. A low rank approximation can be obtained from the resulting random vectors in the image of the matrix. Since the main effort of these methods is dominated by the matrix-vector multiplications, these algorithms are usually very fast. In return, however, only pessimistic error estimates are avaliable, and the actual error is often much better.

### References:
* N. Halko, P. G. Martinsson, J. A. Tropp. Finding structure with randomness: Probabilistic algorithms for constructing approximate matrix decompositions.

## 15. Pivoted Cholesky Decomposition
The pivoted Cholesky decomposition is an extremely efficient algorithm to determine a low rank approximation of a symmetric, positive semidefinite matrix.  To obtain an approximation of a matrix,  only the diagonal and $m$ columns of the underlying matrix need to be computed. Therefore, the method seems appealing especially for fully populated matrices. In particular, a rigorous posteriori error control is available in the trace norm, so that the method always yields a reliable approximation.

### References:
* H. Harbrecht, M. Multerer, and R. Schneider. On the low-rank approximation by the pivoted Cholesky decomposition.

## 16. Fast Multipole Methods
The fast multipole method (FMM) is an efficient way to compute the matrix-vector multiplication in $O(n)$ or $O(n\log(n))$ with a bounded error for a particular structured dense $n\times n$ matrix $\Phi$. Such matrices arising out of the $n$-body problem are usually separable of order k，i.e., $\Phi\approx AB$, where $A$ and $B$ are $n\times k$ matrix and $k\times n$ matrix respectively. The matrix-vector multiplication is approximately equvilent to perform $A(Bx)$. Because $k$ is usually $O(1)$ or $O(\log(n))$, the computaional complexity is reduced dramatically. Besides, one of the distinct advantages of the FMM is its rigorous error estimates. 

### References:

* L. Greengard and V. Rokhlin. A Fast Algorithm for Particle Simulations.

## 17. Hierarchical Matrices
Hierarchical matrices are special matrices $\mathcal{H}\in \mathbb{R}^{n\times n}$, which have blockwise low rank $k \ll n$ with respect to a special tree-like partitioning $\tau$, the so-called "Block Cluster Tree". A special challenge is posed by the arithmetic of these matrices, for example the addition and multiplication. In the addition, the rank per matrix block can double and must be recompressed accordingly. For the multiplication of hierarchical matrices with even the same block structure, matrix blocks of different sizes can be combined.

### References:

* S. Börm, L. Grasedyck, W. Hackbusch. Hierarchical Matrices.
* W. Hackbusch. A sparse matrix arithmetic based on on H-Matrices. Part I: Introduction to H-Matrices.

## 18. Fast Fourier Transform
Convolution is commonly used in the computer vision as a shift equivariant operator. The convolution $\boldsymbol{w}\circledast \boldsymbol{v}$ can be computed either as the multiplication of the circulant matrix derived from the weight vector $\boldsymbol{w}$ and the signal vector $\boldsymbol{v}$, or in the Fourier basis by first computing the element-wise product of their Fourier transforms, and then coming back to the original coordinates via the inverse Fourier transform. The fast Fourier transform (FFT) was invented to bring down the complexity to $O(n\log(n))$. The algorithm was reinvented by J. W. Cooley and J. Tukey independently 160 years later than the first discovery by Carl Friedrich Gauss.

### References:

* J. W. Cooley and J. Tukey. An algorithm for the machine calculation of complex Fourier series.

## 19. Fast Wavelet Transform
Wavelet transform has been used in many fields, primarily for signal processing and, consequently, image analysis as a replacement for Fourier transform and discrete cosine transform, with a notable mention going to the work done in JPEG2K. The fast wavelet transform (FWT) is an algorithm commonly used to apply a discrete wavelet transform onto an $n\times n$ image and decompose it into approximation coefficients using convolutions of filter banks and downsampling operators, with a computational cost in the order of $\mathrm{O}(n^2)$. 

### References:

* S. Mallat. A wavelet tour of signal processing.

## 20. Sparse Grids
Suppose to achieve a required accuracy, we need to employ at least N grid points in the one-dimensional space. With regular grid-based approaches, a straight forward extension to $d$ dimensions leads to $N^d$ grid points to reach the same accuracy. Therefore, regular grid-based methods exhibit the problem of the exponential dependence of dimensionality, i.e., the curse of dimensionality. The sparse grid method is a numerical discretization based on the hierarchical basis, which can deal with this problem to some extent.

### References:

* J. Garcke and M. Griebel. Sparse grids and applications.
* https://sparsegrids.org

## 21.  Tensor-train Decomposition
Tensor is an array with dimensionality more than 2. Because of the curse of dimensionality, challenges are posed by the storage of high dimensional tensors and the implementation of their arithmetic operations. Tensor-train decomposition is one possible solution, considered as an extension of low rank approximation of matrices. In this method, one can unfold a tensor recursively by spliting indices into two parts at each step, and perform any low rank approximation on the resulting 2D matrices. Such way the tensor could be written in a so-called TT-format. If the low rank $k$ is small, the storage will decrease from $O(n^d)$ to $O(dnk^2)$. The complexity of the arithmetic operations reduce dramatically as well, e.g., addition, element-wise production.

### References:

* I. V. Oseledets. Tensor-Train Decomposition.

## 22. PINN
