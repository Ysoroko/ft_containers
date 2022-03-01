#ifndef VECTOR_HPP
# define VECTOR_HPP

template <typename T>
class vector
{
	public:
		// Contructor
		vector()
		{
			_t = new T[1];
		}
		// Destructor
		~vector()
		{
			delete [] this->_t;
		}
		// Operator =
		vector & operator=(vector const & ref)
		{
			
		}

	private:
		T	*_t;
};

#endif