package test; 
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

 

public class Main {
	String driverName = "com.microsoft.sqlserver.jdbc.SQLServerDriver";
	String dbURL = "jdbc:sqlserver://localhost:1433;databasename=KCSJ"; 
	String userName = "user_dou"; // 用户名
	String userPwd = "22755"; // 密码
	public void getConnectionSqlServer() {
 
		
 
		Connection dbConn = null;
		try {
 
			Class.forName(driverName).newInstance();
			System.out.println("驱动加载成功");
		} catch (Exception ex) {
			System.out.println("驱动加载失败");
			ex.printStackTrace();
		}
		try {
			dbConn = DriverManager.getConnection(dbURL, userName, userPwd);
			System.out.println("成功连接数据库！");
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
		String userName = "sa"; // 用户名
		String userPwd = "22755"; // 密码

		String driverName = "com.microsoft.sqlserver.jdbc.SQLServerDriver";
		//return DriverManager.getConnection("jdbc:sqlserver://localhost:1433;integratedSecurity=true;DatabaseName=KCSJ");
		return DriverManager.getConnection(dbURL, userName, userPwd);
	}

}

