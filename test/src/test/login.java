/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package test;

/**
 * 
 * @author 豆光耀
 */
public class login extends javax.swing.JFrame {
	/**
	* 
	*/
	private static final long serialVersionUID = 1L;
	static String bumenhao;
	String ming;
	static String key;
	String[] a = { "1", "8", "15", "22", "29", "36" };
	int id = 0;
	int jingli = 0;

	public login() {
		initComponents();
	}

	private void initComponents() {

		jLabel1 = new javax.swing.JLabel();
		jLabel2 = new javax.swing.JLabel();
		jTextFieldid = new javax.swing.JTextField();
		jTextFieldkey = new javax.swing.JTextField();
		jLabel3 = new javax.swing.JLabel();
		jRadioButton1 = new javax.swing.JRadioButton();
		jRadioButton2 = new javax.swing.JRadioButton();
		jButtondenlu = new javax.swing.JButton();
		jLabel4 = new javax.swing.JLabel();
		jTextFieldidbumen = new javax.swing.JTextField();

		setDefaultCloseOperation(javax.swing.WindowConstants.HIDE_ON_CLOSE);

		jLabel1.setText("请输入登录名：");

		jLabel2.setText("请输入密码：");

		jLabel3.setText("请选择登录身份：");

		jRadioButton1.setText("员工");

		jRadioButton2.setText("经理");

		jButtondenlu.setText("确认登录");

		jButtondenlu.addActionListener(new java.awt.event.ActionListener() {
			public void actionPerformed(java.awt.event.ActionEvent evt) {
				jButtondenluActionPerformed(evt);
			}
		});
		jRadioButton1.addActionListener(new java.awt.event.ActionListener() {
			public void actionPerformed(java.awt.event.ActionEvent evt) {
				id = 1;
			}
		});
		jRadioButton2.addActionListener(new java.awt.event.ActionListener() {
			public void actionPerformed(java.awt.event.ActionEvent evt) {
				jingli = 1;

			}
		});

		jLabel4.setText("经理登录，请填写部门号");

		javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
		getContentPane().setLayout(layout);
		layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout
				.createSequentialGroup()
				.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
						.addGroup(layout.createSequentialGroup().addGap(111, 111, 111)
								.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
										.addComponent(jLabel1).addComponent(jLabel2).addComponent(jLabel3)
										.addComponent(jLabel4))
								.addGap(38, 38, 38)
								.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
										.addGroup(layout.createSequentialGroup().addComponent(jRadioButton1)
												.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 32,
														Short.MAX_VALUE)
												.addComponent(jRadioButton2))
										.addComponent(jTextFieldid).addComponent(jTextFieldkey)
										.addComponent(jTextFieldidbumen, javax.swing.GroupLayout.PREFERRED_SIZE, 147,
												javax.swing.GroupLayout.PREFERRED_SIZE)))
						.addGroup(layout.createSequentialGroup().addGap(210, 210, 210).addComponent(jButtondenlu,
								javax.swing.GroupLayout.PREFERRED_SIZE, 106, javax.swing.GroupLayout.PREFERRED_SIZE)))
				.addContainerGap(97, Short.MAX_VALUE)));
		layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout
				.createSequentialGroup().addGap(88, 88, 88)
				.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel1)
						.addComponent(jTextFieldid, javax.swing.GroupLayout.PREFERRED_SIZE,
								javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
				.addGap(41, 41, 41)
				.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING).addComponent(jLabel2)
						.addComponent(jTextFieldkey, javax.swing.GroupLayout.PREFERRED_SIZE,
								javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
				.addGap(40, 40, 40)
				.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(jLabel3)
						.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
								.addComponent(jRadioButton1).addComponent(jRadioButton2)))
				.addGap(22, 22, 22)
				.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel4)
						.addComponent(jTextFieldidbumen, javax.swing.GroupLayout.PREFERRED_SIZE,
								javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
				.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 33, Short.MAX_VALUE)
				.addComponent(jButtondenlu, javax.swing.GroupLayout.PREFERRED_SIZE, 48,
						javax.swing.GroupLayout.PREFERRED_SIZE)));

		pack();
	}

	private void jButtondenluActionPerformed(java.awt.event.ActionEvent evt) {
		error er1 = new error();

		nomanager no = new nomanager();

		bumenhao = jTextFieldidbumen.getText();
		ming = jTextFieldid.getText();
		login.key = jTextFieldid.getText();
		manager man1 = new manager();
		EmployeeInformation em1 = new EmployeeInformation();
		if (!((ming.equals(key)))) {
			er1.setVisible(true);
		} else {
			if ((ming.equals(key)) && id == 1) {
				em1.setVisible(true);
			} else {
				if ((ming.equals(key)) && jingli == 1 && !(duibi())) {
					no.setVisible(true);
				} else {
					if ((ming.equals(key)) && jingli == 1 && duibi()) {
						man1.setVisible(true);
						// login.setVisible(false);
					}
				}

			}
		}

	}

	// private void jbutton1(java.awt.event.ActionEvent evt) {
	// id=-id;
	// }
	// private void jbutton2(java.awt.event.ActionEvent evt) {
	// id=-id;
	// }
	public boolean duibi() {
		for (int i = 0; i < a.length; i++) {
			if (ming.equals(a[i])) {
				return true;

			}
		}
		return false;
	}

	public static void main(String args[]) {

		try {
			for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
				if ("Nimbus".equals(info.getName())) {
					javax.swing.UIManager.setLookAndFeel(info.getClassName());
					break;
				}
			}
		} catch (ClassNotFoundException ex) {
			java.util.logging.Logger.getLogger(login.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
		} catch (InstantiationException ex) {
			java.util.logging.Logger.getLogger(login.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
		} catch (IllegalAccessException ex) {
			java.util.logging.Logger.getLogger(login.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
		} catch (javax.swing.UnsupportedLookAndFeelException ex) {
			java.util.logging.Logger.getLogger(login.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
		}

		java.awt.EventQueue.invokeLater(new Runnable() {
			public void run() {
				new login().setVisible(true);
			}
		});
	}

	private javax.swing.JButton jButtondenlu;
	private javax.swing.JLabel jLabel1;
	private javax.swing.JLabel jLabel2;
	private javax.swing.JLabel jLabel3;
	private javax.swing.JLabel jLabel4;
	private javax.swing.JRadioButton jRadioButton1;
	private javax.swing.JRadioButton jRadioButton2;
	private javax.swing.JTextField jTextFieldid;
	private javax.swing.JTextField jTextFieldidbumen;
	private javax.swing.JTextField jTextFieldkey;

}
