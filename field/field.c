void GenerateField(int h, int field){
	for (int i = 0; i < h; i++){
          for (int j = 0; j < h; j++){
            *field[i][j] = 0;
          }
        }
}