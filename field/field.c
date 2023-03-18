int fieldWidth;

int DeclareVars(int fieldH){
  fieldWidth = fieldH;
  return 0;
}

int GenerateField(int field[][fieldWidth]){
	for (int i = 0; i < fieldWidth; i++){
          for (int j = 0; j < fieldWidth; j++){
            field[i][j] = 0;
          }
        }
}