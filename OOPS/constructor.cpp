// A constructor is a special member function used to initialize objects of a class when they are created. 
//It has the same name as the class, doesn't have a return type (not even void), and is automatically called when an object is instantiated.
//Types of Constructor
/*1.Default constructor :- A constructor with no parameters
2.Parameterized Constructor :- A constructor with parameters
3.Copy Constructor :- The copy constructor in C++ is used to copy data from one object to another. */
#include<iostream>
using namespace std;
// class  Wall {
//     public:
//       // create a constructor
//       Wall() {
//         // code
//       }
//   };

//default
// declare a class
class  Wall {
    private:
      double length;
  
    public:
      // default constructor to initialize variable
      Wall()
        : length{5.5} {
        cout << "Creating a wall." << endl;
        cout << "Length = " << length << endl;
      }
  };
  
  int main() {
    Wall wall1;
    return 0;
  }

//parametrized
// C++ program to calculate the area of a wall

// declare a class
class Wall {
  private:
    double length;
    double height;

  public:
    // parameterized constructor to initialize variables
    Wall(double len, double hgt)
      : length{len}
      , height{hgt} {
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  // create object and initialize data members
  Wall wall1(10.5, 8.6);
  Wall wall2(8.5, 6.3);

  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}

//copy constructor
// declare a class
class Wall {
  private:
    double length;
    double height;

  public:

    // initialize variables with parameterized constructor
    Wall(double len, double hgt)
      : length{len}
      , height{hgt} {
    }

    // copy constructor with a Wall object as parameter
    // copies data of the obj parameter
    Wall(const Wall& obj)
      : length{obj.length}
      , height{obj.height} {
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  // create an object of Wall class
  Wall wall1(10.5, 8.6);

  // copy contents of wall1 to wall2
  Wall wall2 = wall1;

  // print areas of wall1 and wall2
  cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << wall2.calculateArea();

  return 0;
}