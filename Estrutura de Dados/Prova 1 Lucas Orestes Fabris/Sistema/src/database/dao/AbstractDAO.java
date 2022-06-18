package database.dao;

import java.sql.SQLException;
import java.util.List;

public abstract class AbstractDAO {
	
	public abstract List<Object> Select() throws SQLException;
	
	public abstract void Insert(final Object parametro) throws SQLException;
	
	public abstract void Update(final Object parametro) throws SQLException;
	
	public abstract void Delete(final Object parametro) throws SQLException;

}
