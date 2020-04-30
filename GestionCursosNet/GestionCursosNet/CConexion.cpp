#include "CConexion.h"

CConexion::CConexion()
{
}

void CConexion::Conectar() {
	cnn->Open();
}

void CConexion::Desconectar() {
	cnn->Close();
}

void CConexion::IngresarQuery(String^ SqlQuery) {
	SQLQuery = SqlQuery;
}

DataTable^ CConexion::QueryDataTable() {
	adp = gcnew MySqlDataAdapter(SQLQuery,cnn);
	dt = gcnew DataTable();
	adp->Fill(dt);
	return dt;
}
