# MCS: Efficient Computational Algorithms SA 2022-2023
Michael Multerer, Wei Huang, and Davide Baroli.

##
General References:

* IEEE Computing in Science & Engineering [Volume: 2, Issue: 1, Jan.-Feb. 2000](
https://ieeexplore.ieee.org/xpl/tocresult.jsp?isnumber=17639&punumber=5992).
* A. Townsend [The top 10 Algorithms from the 20th Century](https://pi.math.cornell.edu/~ajt/presentations/TopTenAlgorithms.pdf).
* B. Korte and J. Vygen. Combinatorial Optimization.
* T. H. Cormen, C. E. Leierson, R. L. Rivest, and C. Stein. Introduction to Algorithms.
* G. H. Golub, C. F. Van Loan. Matrix Computations.
* H. Harbrecht and M. Multerer. Algorithmische Mathematik (in German).
##
<p align="center">
<img src="https://thekidshouldseethis.com/wp-content/uploads/2012/11/cheetahs-on-the-edge.jpg" width=60% height=60%></img>
</p>

## 1. Sorting Algorithms (Supervisor: Michael)
In many applications it is useful to sort an array of length $n$. A simple algorithm to sort a vector is the bubblesort algorithm,
which pairwise compares and swaps the elements of the array. Although this algorithm is quite simple, it is often unsuitable in
practice due to its cost of $O(n^2)$. The most efficient sorting algorithms used today are Quicksort and Mergesort. In general,
one can compute a lower bound for the cost of algorithms based on comparisons.
This suggests that the mergesort is asymptotically optimal.

### References:

* B. Korte and J. Vygen. Combinatorial Optimization.
* T. H. Cormen, C. E. Leierson, R. L. Rivest, and C. Stein. Introduction to Algorithms.

## 2. Integer Relation Detection (Supervisor: Wei)
Find a non-zero vector of integers $(a_1,\cdots,a_n)$ such that 
$$a_1x_1+a_2x_2+\cdots+a_nx_n = 0,$$
where $x=(x_1,\cdots,x_n)$ is a vector of real or complex numbers. Such a problem is well known as integer relation detection.
If $n=2$, it could be solved by the Euclidean algorithm. The problem with larger $n$ was firstly solved by Helaman Ferguson and
Rodney Forcade in 1977. Despite the simplicity of the mathematical representation of this problem, it is widely used to find new
interesting patterns in number theory, quantum field theory, and chaos theory. Don't you want to use this simple but
powerful tool to discovery new principles of nature?

### References:

* D. H. Bailey. Integer Relation Detection.

## 3. Spectral Clustering (Supervisor: Wei)
Graph partitioning is heavily used in domain decomposition and social community detection. If the considered graph is embedded into
a coordinate system, there exist simpler methods, for example recursive coordinate bisection and inertial partitioning. However, these
methods totally fail for hypergraphs. This is where the spectral clustering method comes in, which also work for general graphs
without nodal coordinates. The method is inspired by a vibrating string: The label of a node is determined by the sign of the
corresponding element in the second smallest eigenvector, also called Fiedler eigenvector, of the graph Laplacian matrix. 

### References:

* M. Fiedler. Algebraic connectivity of graphs.
* A. Pothen, H. D. Simon, and K. Liou. Partitioning sparse matrices with eigenvectors of graphs.

## 4. Nested Dissection (Supervisor: Michael)
The Cholesky decomposition is a direct solver for symmetric positive definite system $Ax=b$ and corresponds to a 
particular version of the Gaussian elimination. However, even for a sparse matrix, the resulting lower triangular matrix $L$ can 
potentially be dense due to newly added non-zero entries (fill-in), which increase the amount of storage and computation.
The fill-in depends on the order in which variables are eliminated. Nested dissection is a fill-in reducing ordering based on
a graph model. One can think of a sparse matrix as a connectivity matrix and therefore as a graph. The graph is recursively splitted
into pieces using proper separators, numbering the nodes in separators last. For certain classes of graphs, cost bounds
on the corresponding matrix factorization can be proven.

### References:

* A. George. Nested Dissection of a Regular Finite Element Mesh.

## 5. Strassen algorithm (Supervisor: Davide)
Given two square $n\times n$ matrices, the naive method for computing the matrix multiplication has cost $O(n^3)$. However, it can
be done in a better way using Strassen's algorithm which is a divide and conquer method and reuses intermediate products.
As a consequence, the cost of the matrix factorization is reduced to approximately $O(n^{2.8})$. Based on this observation,
there were ever since efforts to further reduce the cost of the matrix multiplication, a bound proven in 2020 is $O(n^2.37286)$

### References:

* V. Strassen. Gaussian Elimination is not Optimal.
* J. Alman and V. V. Williams. A Refined Laser Method and Faster Matrix Multiplication.

## 6. Simplex Method for Linear Programming (Supervisor: Wei)
A linear program is a problem of finding the optimal solution such that the target function can achieve the largest or smallest under some linear constraints. The simplex method was invented by George Dantzig for solving the linear program by hand in 1940s. It is based on the observation that the optimal solution would exit on the corner or boundary of the graph defined by the contrains. In the standard simplex method, one needs to convert the linear problem to a standard form introducing slack variables when needed. Finally, the optimal solution can be found using simplex tableau and pivot operations. 

### References:

* K. Murty. Linear programming.

## 7. Gradient Descent and Stochastic Gradient Descent (Supervisor: Wei)
Gradient descent is a first order optimization method, which is based on the fact that function value decreases fastest along the opposite direction of its gradient. In spite of its simplicity, it is successfully used to train various neural networks, e.g., fully connected neural networks, convolutional neural networks, and recurrent neural networks. Their gradients are computed by the so-called backpropagation algorithm. In order to speed up the convergence process, there were many variants of gradient descent invented, for example, batch gradient descent, stochastic gradient descent, and the
Adam algorithm.

### References:

* I. Goodfellow, Y. Bengio, and A. Courville. Deep  Learning.

## 8. Monte Carlo Method (Supervisor: Davide)
The Monte Carlo method is a method for computing high dimensional integrals based on random sampling.
The basis of sampling on computers is random number generation. Unfortunately, most computers can only
generate pseudo-random numbers using a PRNG which has to be initialized by a seed. For a given random
variable one can sample from its distributions with the inverse transform method. Another approach
to sample from distributions, which cannot be sampled this way, is the
Metropolis-Hastings algorithm, which computes the stationary distribution of a Markov chain. 

### References:

* M. L. Rizzo. Statistical Computing with R.
* O. Häggström. Finite Markov Chains and Algorithmic Applications

## 9. Multilevel Monte Carlo method (Supervisor: Davide)
The Monte Carlo is one of the most common approaches for approximating the expectation of a random variable $X(\omega)$.
From the weak law of large numbers theorem, the required number of samples depends on the variance for a given accuracy to achieve.
If the variance is small, the Monte Carlo method even with few samples can be of high accuracy.
One of the classic methods for variance reduction involves a hierarchy of control variates and is called
multilevel Monte Carlo method. By computing relatively few samples at the high level of the hierarchy,
but lots of samples at the coarse level, we substaintially save in terms of the total computation.

### References:

* S. Heinrich. Multilevel Monte Carlo Methods
* M. B. Giles. Multilevel Monte Carlo Path Simulation.

## 10. Krylov Subspace Iteration Methods (Supervisor: Michael)
Important methods for the numerical solution of eigenvalue problems and large systems of linear equations, such as the Lanczos or the CG method are based on the projection onto a Krylov subspace. Given a matrix $A\in\mathbb{R}^{n\times n}$ and a vector $v\in \mathbb{R}^n, n\in N$, the Krylov space is defined according to $\mathcal{K}_m(A,v):=\{v,Av,\cdots,A^{m-1}\boldsymbol{v}\}$. Of particular interest are the approximation properties of these subspaces and the relation between them.

### References:
* Y. Saad. Numerical methods for large eigenvalue problem.
* G. H. Golub and C. F. van Loan. Matrix Computation.

## 11. QR Algorithm for Computing Eigenvalues (Supervisor: Davide)
The QR algorithm is one of the most popular iterative methods for computing eigenvalues of general matrices $A$. We initialize $B$ with $A$ and then repeatedly update the matrix $B$ with the product $RQ$, where $Q$ and $R$ are obtained by the QR decomposition of $B$ at the previous step. As the iteration goes, it will eventually converge to an upper triangular matrix of which the diagonal is the eigenvalue vector of the original matrix $A$. Due to the large time complexity of the classical QR algorithm, the shift QR algorithm with Hessenberg reduction is more often used in practice.

### References:
* J. G. F. Francis. The QR Transformation—Part 1 and Part 2.
* G. H. Golub and C. F. van Loan. Matrix Computation.

## 12. Singular Value Decomposition (Supervisor: Davide)
The Singular value decomposition (SVD) of an $n\times m$ matrix $A$ of rank $r$ is the decomposition into a product of three matrices
$$A = U\Sigma V^T,$$
where $U$ is a unitary $n\times n$ matrix, $V$ is the adjoint of a unitary $m\times m$ matrix, and $\Sigma$ is a $n\times m$ matrix in the form 
$$\Sigma = [D,\boldsymbol{0};\boldsymbol{0},\boldsymbol{0}].$$
The $r\times r$ matrix $D$ is a diagonal matrix and its diagonal entries are $\sigma_1,\cdots,\sigma_r$ called singularnvalues. In particular, $\sigma_1\geq\sigma_2\geq\cdots\geq\sigma_r.$ With the help of the SVD, it is possible to calculate the best rank-k approximation of $A$
in the spectral norm as well as in the Frobenius norm.

### References:
* C. Eckart and G. Young. The approximation of one matrix by another of lower rank.

## 13. Adaptive Cross Approximation (Supervisor: Michael)
The adaptive cross approximation is a method for the approximation of asymptotically smooth functions.
These are bivariate functions $f(x,y)$ whose derivatives apart from the diagonal $x=y$ exhibit a certain decay behavior.
It can be shown that these functions can be partitioned in such a way that individual low-rank regions can be approximated.
The actual algorithm is then based on a partially pivoted Gaussian algorithm with a corresponding adaptive decay criterion.

### References:

* M. Bebendorf. Approximation of boundary element matrices.
* M. Bebendorf. Hierarchical Matrices.

## 14. Randomized Low-rank Approximation (Supervisor: Davide)
A very simple class of low-rank approximations of a matrix is obtained by using the product of the matrix and random vectors. A low-rank approximation can be obtained from the vectors in the image of the matrix. Since the main effort of these methods is dominated by matrix-vector multiplications, these algorithms are usually very fast for sparse matrices. In return, however, only pessimistic error estimates are avaliable, and the actual error is often much better.

### References:
* N. Halko, P. G. Martinsson, J. A. Tropp. Finding structure with randomness: Probabilistic algorithms for constructing approximate matrix decompositions.

## 15. Pivoted Cholesky Decomposition (Supervisor: Michael)
The pivoted Cholesky decomposition is an extremely efficient algorithm to determine a low-rank approximation of a symmetric, positive semidefinite matrix.  To obtain an approximation of a matrix,  only the diagonal and $m$ columns of the underlying matrix need to be computed. Therefore, the method seems appealing especially for fully populated matrices. In particular, a rigorous posteriori error control is available in the trace norm, so that the method always yields a reliable approximation.

### References:
* H. Harbrecht, M. Multerer, and R. Schneider. On the low-rank approximation by the pivoted Cholesky decomposition.

## 16. Fast Multipole Methods (Supervisor: Michael)
The fast multipole method (FMM) is an efficient way to compute the matrix-vector multiplication in $O(n)$ or $O(n\log(n))$ with a bounded error for a particular structured dense $n\times n$ matrix $\Phi$. Such matrices arising out of the $n$-body problem are usually blockwise separable of order k，i.e., $\Phi|_{\tau,\sigma}\approx AB$, where $A$ and $B$ are $n\times k$ matrix and $k\times n$ matrix respectively. Herein,
$\tau$ and $\sigma$ are suitable index sets. The matrix-vector multiplication for this block is thus approximately equivalent to perform $A(Bx)$. Because $k$ is usually $O(1)$, the computaional cost is reduced dramatically. Besides, one of the distinct advantages of the FMM is its rigorous error estimates. 

### References:

* L. Greengard and V. Rokhlin. A Fast Algorithm for Particle Simulations.

## 17. Hierarchical Matrices (Supervisor: Michael)
Hierarchical matrices are special matrices $\mathcal{H}\in \mathbb{R}^{n\times n}$, which have blockwise low-rank $k \ll n$ with respect to a special tree-like partitioning $\tau$, the so-called "Block Cluster Tree". A special challenge is posed by the arithmetic of these matrices, for example the addition and multiplication. In the addition, the rank per matrix block can double and must be recompressed accordingly. For the multiplication of hierarchical matrices with even the same block structure, matrix blocks of different sizes need to be combined.

### References:

* S. Börm, L. Grasedyck, W. Hackbusch. Hierarchical Matrices.
* W. Hackbusch. A sparse matrix arithmetic based on on H-Matrices. Part I: Introduction to H-Matrices.

## 18. Fast Fourier Transform (Supervisor: Wei)
Convolution is commonly used in computer vision as a shift equivariant operator. The convolution ${w}\star{v}$ can be computed either as the multiplication of the circulant matrix derived from the weight vector ${w}$ and the signal vector ${v}$, or in the Fourier basis by first computing the element-wise product of their Fourier transforms, and then coming back to the original coordinates via the inverse Fourier transform. The fast Fourier transform (FFT) was invented to bring down the cost to $O(n\log(n))$. 
This cost reduction enabled modern signal processing and is the foundation of the mp3 audio format.
The algorithm was reinvented by J. W. Cooley and J. Tukey independently 160 years later than the first discovery by Carl Friedrich Gauss.

### References:

* J. W. Cooley and J. Tukey. An algorithm for the machine calculation of complex Fourier series.
* M. Bronstein. Deriving convolution from first principles.

## 19. Fast Wavelet Transform (Supervisor: Wei)
Similar to the fast Fourier transform, the fast wavelet transform (FWT) computes a change of basis into a wavelet basis. Different from 
the fast Fourier transform, the FWT can be performed in linear cost with respect to the length of the signal.
It is used in many fields, primarily for signal processing and, consequently, image analysis as a replacement for Fourier transform and discrete cosine transform, with a notable mention going to the work done in JPEG2K. The FWT can also be applied to decompose and filter images.

### References:

* S. Mallat. A wavelet tour of signal processing.

## 20. Sparse Grids (Supervisor: Wei)
Suppose to achieve a required accuracy, we need to employ at least $N$ grid points in the one-dimensional space. With regular grid-based approaches, a straight forward extension to $d$ dimensions leads to $N^d$ grid points to reach the same accuracy. Therefore, regular grid-based methods exhibit the problem of the exponential dependence of dimensionality, i.e., the curse of dimensionality. For the approximation of certain classes of functions, sparse grids overcome the curse of dimensionality and lead to efficient representations.

### References:

* H. J. Bungartz and M. Griebel. Sparse grids.
* https://sparsegrids.org

## 21.  Tensor-trains (Supervisor: Wei)
A tensor is an array with dimensionality more than 2. Because of the curse of dimensionality, challenges are posed by the storage of high-dimensional tensors and the implementation of their arithmetic operations. The tensor-train decomposition is one possible solution, considered as an extension of low rank-approximation of matrices. In this method, one can unfold a tensor recursively by spliting indices into two parts at each step, and perform any low-rank approximation on the resulting 2D matrices. If the low rank $r$ is small, the storage will decrease from $O(n^d)$ to $O(dnr^2)$. The cost of the arithmetic operations reduces dramatically as well, e.g., addition and element-wise multiplication.

### References:

* I. V. Oseledets. Tensor-Train Decomposition.

## 22. Deep Learning: Neural Operators  (Supervisor: Davide)
Neural operators are a new paradigm for data-driven prediction of proof-of-concept simulations in engineering and biomedicine. The aim is learning a nonlinear mapping, e.g. nonlocal operator, fractional, integral between infinite dimensional Banach spaces.  This non-linear operator is
mapping the input dataset (such as initial data or boundary data, source terms and material coefficients) to the output (the solution field in
space-time or some observable in the domain). In these methods, one can decompose the accuracy error in encoder, reconstruction and approximation. The complexity of the algorithm scales with the number of branches and the neural network parameters. 

### References:

* T. Chen and H. Chen. Universal approximation to nonlinear operators by neural networks with arbitrary activation functions and its application to dynamical
systems.
* L. Lu, et al. Learning nonlinear operators via DeepONet based on the universal approximation theorem of operators.
* L. Lu, et al. A comprehensive and fair comparison of two neural operators (with practical extensions) based on FAIR data.


## Programming Languages for code

<p align="center">
  <img  height="300" src="https://github.com/EfficientComputationAlgorithm/eca/blob/main/images/python_logo.png"></img>
  <img  height="300" src="https://github.com/EfficientComputationAlgorithm/eca/blob/main/images/cpp_logo.png"></img>
  <img  height="300" src="https://www.r-project.org/logo/Rlogo.png"></img>  
</p>







