#pragma once

#ifndef VECTOR_H
#define VECTOR_H



template <class T>
class Vector
{
public:
    Vector();
	// class declaration you fill in the rest and include doxygen comments
    ~Vector();


	void add_Item(const    T& add_Item);
	void remove_Item(const T& remove_Item);

    //------------------------------------------------------------------------
    bool search_For_Item(const T& item_Found);


    //-----------------------------------------------------
	int get_Current_Maximum_Size() const;
	int get_Current_Length()  const;


private:

    T*  storage_Vector;
    int m_Current_Size; 
    int m_Current_Max_Size;
    
	// the encapsulated dynamic array fill in ..
};


template <class T>
Vector<T>::~Vector()
{
    delete[] storage_Vector;
} //end destructor


// class implementation follows with normal comments you fill in the rest

template <class T>


Vector<T>::Vector()
{
    m_Current_Max_Size = 1;
    m_Current_Size     = 0;
}


    /***************************************************************************
    *@brief    : add_Item
    *
    *@purpose  : adds an item to the vector 
                 if the current size is less than the maximum size of the  the vector
    *            else the vector will double in size and add the item
    *
    *@param    : const T& item
    *
    *@return   : void
    ****************************************************************************/

template<class T>

void Vector<T>::add_Item(const T& item)
{
    //if current location is less than max_Size add a item to the current vector
    if (m_Current_Size < m_Current_Max_Size)
    {
        storage_Vector[m_Current_Size] = item;

        m_Current_Size++;
    }


    /// if the current size is greater than max size double the current size of the vector 
    else 
    {
        m_Current_Max_Size *= 2;


        T* temporary_Vector = new T[m_Current_Max_Size];


        for (int i = 0; i < m_Current_Size; i++)
        {
            temporary_Vector[i] = storage_Vector[i];
        }


        storage_Vector = temporary_Vector;
        storage_Vector[m_Current_Size] = item;


        m_Current_Size++;
    }
}



    /***************************************************************************
    *@brief    : remove_Item
    *
    *@purpose  : removes an item from the vector if the item is there 
    * 
    *@param    : const T& item
    * 
    *@return   : void
    ****************************************************************************/

template<class T>

void Vector<T>::remove_Item(const T& item)
{
    for (int i = 0; i < m_Current_Size; i++)
    {
        if (item == storage_Vector[i])
        {

            for (int j = i; j < m_Current_Size - 1; j++)
            {
                storage_Vector[j] = storage_Vector[j + 1];
            }

            m_Current_Size--;
        }
    }
}

    /***************************************************************************
    *@brief    : search_For_Item
    *
    *@purpose  : searches for an item inside of the vector
    *
    *@param    : const T& item
    *
    *@return   : void
    ****************************************************************************/


template<class T> 

bool Vector<T>::search_For_Item(const T& item)
{
    for (int i = 0; i < m_Current_Size; i++)
    {

        if (item == storage_Vector[i])
        {
            return true;
            //std::cout << " Item in vector" << std::endl;
        }

    }
    return false;
}


#endif