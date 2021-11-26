package com.xiaoming.web;

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/FindServlet")
public class FindServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		try {
			//			// �������ݿ�������ע�ᵽ����������
			Class.forName("com.mysql.cj.jdbc.Driver");
			// ���ݿ������ַ���
			String url = "jdbc:mysql://localhost:3306/yxmtest?serverTimezone=UTC";
			// ���ݿ��û���
			String username = "root";
			// ���ݿ�����
			String password = "123456";
			// ����Connection����
			Connection conn = DriverManager.getConnection(url,username,password);
			// ��ȡStatement
			Statement stmt = conn.createStatement();
			// ���ͼ����Ϣ��SQL���
			String sql = "select * from bookmanger";
			// ִ�в�ѯ
			ResultSet rs = stmt.executeQuery(sql);
			// ʵ����List����
			List<Book> list = new ArrayList<Book>();
			// �жϹ������ƶ������ж��Ƿ���Ч
			while(rs.next()){
				// ʵ����Book����
				Book book = new Book();
				// ��id���Ը�ֵ
				book.setId(rs.getInt("id"));
				// ��name���Ը�ֵ
				book.setName(rs.getString("name"));
				// ��price���Ը�ֵ
				book.setPrice(rs.getDouble("price"));
				// ��bookCount���Ը�ֵ
				book.setBookCount(rs.getInt("bookCount"));
				// ��author���Ը�ֵ
				book.setAuthor(rs.getString("author"));
				// ��ͼ�������ӵ�������
				list.add(book);
			}
			// ��ͼ�鼯�Ϸ��õ�request֮��
			request.setAttribute("list", list);
			rs.close();		// �ر�ResultSet
			stmt.close();	// �ر�Statement
			conn.close();	// �ر�Connection
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		} catch (SQLException e) {
			e.printStackTrace();
		}
		// ����ת����book_list.jsp
		request.getRequestDispatcher("book_list.jsp").forward(request, response);
	}
}
