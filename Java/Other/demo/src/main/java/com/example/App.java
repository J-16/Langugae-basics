package com.example;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.http.*;

public class App extends HttpServlet{

  public void doGet(HttpServletRequest request, HttpServletResponse response) throws IOException{
    
    response.setContentType("content/html");
    PrintWriter out = response.getWriter();
    out.println("HELLO WORLD");

  }

}
