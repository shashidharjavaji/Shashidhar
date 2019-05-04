import java.io.*;

class AreaPerimeter {

	AreaPerimeter(int length,int breadth){
		System.out.println("Area = " + (length*breadth));
		System.out.println("Perimeter = " + (2*(length+breadth)));
	}
	
	public static void main(String args[]){
		AreaPerimeter a = new AreaPerimeter(5,10);
	}
}