Constructor in C++ is a special method that is invoked automatically at the time of object creation. It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object which is why it is known as constructors.

Constructor does not have a return value, hence they do not have a return type.

The prototype of Constructors is as follows:

<class-name> (list-of-parameters);
Constructors can be defined inside or outside the class declaration:-

The syntax for defining the constructor within the class:

<class-name> (list-of-parameters) { // constructor definition }
The syntax for defining the constructor outside the class:

<class-name>: :<class-name> (list-of-parameters){ // constructor definition}

Characteristics of the constructor:
The name of the constructor is the same as its class name.
Constructors are mostly declared in the public section of the class though it can be declared in the private section of the class.
Constructors do not return values; hence they do not have a return type.
A constructor gets called automatically when we create the object of the class.
Constructors can be overloaded.
Constructor can not be declared virtual.

Types of Constructors

1. Default Constructors: Default constructor is the constructor which doesn’t take any argument. It has no parameters. It is also called a zero-argument constructor.

2. Parameterized Constructors: It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created. To create a parameterized constructor, simply add parameters to it the way you would to any other function. When you define the constructor’s body, use the parameters to initialize the object. 

Note: when the parameterized constructor is defined and no default constructor is defined explicitly, the compiler will not implicitly call the default constructor and hence creating a simple object as

Student s;
Will flash an error

3. Copy Constructor: 
A copy constructor is a member function that initializes an object using another object of the same class. A detailed article on Copy Constructor.

Whenever we define one or more non-default constructors( with parameters ) for a class, a default constructor( without parameters ) should also be explicitly defined as the compiler will not provide a default constructor in this case. However, it is not necessary but it’s considered to be the best practice to always define a default constructor. 

Copy constructor takes a reference to an object of the same class as an argument.

Sample(Sample &t)
          {
                     id=t.id;
          }

          
