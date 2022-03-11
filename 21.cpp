// Created by harsh on 01/03/22.
// Create Matrix class using templates. Write a menu-driven program to perform following
//Matrix operations (2-D array implementation): a) Sum b) Difference c) Product d) Transpose

#include <iostream>

template <class U>
class Matrix {
private:
    int m_row{};
    int m_col{};
    U **matrix;
public:
    Matrix(int row, int col) : m_row{row}, m_col{col}
    {
        matrix = new U*[m_row];

        for (int i{0};i<m_row;++i)
        {
            matrix[i] = new U[m_col];
        }
    }

    void getMatrix()
    {
        std::cout<<"Enter elements of matrix: ";
        for (int i{0};i<m_row;++i)
        {
            for (int j = 0; j<m_col;++j)
                std::cin>>matrix[i][j];
        }
    }

    void displayMatrix()
    {
        std::cout<<"The matrix elements are: \n";
        for (int i{0};i<m_row;++i)
        {
            for (int j{0};j<m_col;++j)
                std::cout<<matrix[i][j]<<' ';
            std::cout<<'\n';
        }
    }
    Matrix<U> operator+(Matrix<U> M)
    {
        Matrix<U> temp(m_row,m_col);
        for (int i{0};i<m_row;++i)
        {
            for (int j{0};j<m_col;++j)
            {
                temp.matrix[i][j]=matrix[i][j]+M.matrix[i][j];
            }
        }
        return temp;
    }

    Matrix<U> operator-(Matrix<U> M)
    {
        Matrix<U> temp(m_row,m_col);
        for (int i{0};i<m_row;++i)
        {
            for (int j{0};j<m_col;++j)
            {
                temp.matrix[i][j]=matrix[i][j]-M.matrix[i][j];
            }
        }
        return temp;
    }

    Matrix<U> operator*(Matrix<U> M)
    {
        Matrix<U> temp(m_row,m_col);
        for (int i{0};i<m_row;++i)
        {
            for (int j{0};j<m_col;++j)
            {
                temp.matrix[i][j]=matrix[i][j]*M.matrix[i][j];
            }
        }
        return temp;
    }
    Matrix<U> transpose()
    {
        Matrix<U> temp(m_row,m_col);
        for (int i{0};i<m_row;++i)
        {
            for (int j{0};j<m_col;++j)
            {
                temp.matrix[j][i]=matrix[i][j];
            }
        }
        return temp;
    }
};

int main()
{
    int choice{}, row{}, col{};
    std::cout<<"Enter rows and cols of matrix: ";
    std::cin>>row>>col;

    Matrix<int> M1(row, col);

    M1.getMatrix();
    M1.displayMatrix();

    do {
        std::cout << "\n1: Sum"
                     "2: Difference."
                     "3: Product "
                     "4: Transpose "
                     "5: Exit";
        std::cout << "\nEnter your choice";
        std::cin >> choice;
        if (choice == 1) {
            Matrix<int> M2(row, col);
            M2.getMatrix();
            M2.displayMatrix();
            Matrix<int> M3 = M1 + M2;
            M3.displayMatrix();
        } else if (choice == 2) {
            Matrix<int> M2(row, col);
            M2.getMatrix();
            M2.displayMatrix();
            Matrix<int> M3 = M1 - M2;
            M3.displayMatrix();
        } else if (choice == 3) {
            Matrix<int> M2(row, col);
            M2.getMatrix();
            M2.displayMatrix();
            Matrix<int> M3 = M1 * M2;
            M3.displayMatrix();
        } else if (choice == 4) {
            Matrix<int> M3 = M1.transpose();
            M3.displayMatrix();
        } else if (choice == 5)
            break;
    }while(choice!=5);
    return 0;
}






















