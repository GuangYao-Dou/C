package test; 
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

 

public class Main {
	String driverName = "com.microsoft.sqlserver.jdbc.SQLServerDriver";
	String dbURL = "jdbc:sqlserver://localhost:1433;databasename=KCSJ"; 
	String userName = "user_dou"; // �û���
	String userPwd = "22755"; // ����
	public void getConnectionSqlServer() {
 
		
 
		Connection dbConn = null;
		try {
 
			Class.forName(driverName).newInstance();
			System.out.println("�������سɹ�");
		} catch (Exception ex) {
			System.out.println("��������ʧ��");
			ex.printStackTrace();
		}
		try {
			dbConn = DriverManager.getConnection(dbURL, userName, userPwd);
			System.out.println("�ɹ��������ݿ⣡");
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
 
			try {
				if (dbConn != null)
					dbConn.close();
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
	
	public static void main(String[] args) {
		Main getConn = new Main();
		getConn.getConnectionSqlServer();
	}


	

	public static  Connection getConnection() throws SQLException {
		String dbURL = "jdbc:sqlserver://localhost:1433;databasename=KCSJ"; 
		String userName = "sa"; // �û���
		String userPwd = "22755"; // ����

		String driverName = "com.microsoft.sqlserver.jdbc.SQLServerDriver";
		//return DriverManager.getConnection("jdbc:sqlserver://localhost:1433;integratedSecurity=true;DatabaseName=KCSJ");
		return DriverManager.getConnection(dbURL, userName, userPwd);
	}

}

