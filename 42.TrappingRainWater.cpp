class Solution {
public:
    int trap(vector<int>& height) {
    int count=0;
	int contAux=0;
	int aux=0;


	for(int i=0;i<height.size();i++){

		if(height[i]!=0){
			int jAux=i+1;
			aux=0;
			contAux=0;
			for(int j=i+1;j<height.size();j++){
				contAux++;
				aux+=height[j];
				if(height[j]>=height[i]){

					aux -=(height[j]-height[i]);

					//cout<<height[i]<<" ok "<<height[j]<< " "<<contAux+1<<endl;

					int area = (height[i]*(contAux+1))-(height[i])-aux;

					//cout<< "heigh "<<height[i]<<" Cont "<<contAux+1<<" aux "<<aux<<endl;
					count+=area;
					aux=0;

					contAux=0;
					i=j-1;
					break;
				}if(j==height.size()-1 and height[i]-height[jAux]>1) {
					int mayor =0;
					int pos=0;
					aux=0;
					for(int k=jAux;k<height.size();k++){
						if(mayor< height[k]){
							mayor = height[k];
							pos = k;
						}
					}
                    if(mayor==0)
						break;
					pos+=1;
					for(int x=jAux;x<pos;x++){
						aux+=height[x];
					}
					//cout<<height[i]<<" no "<<height[pos-1]<< " "<<contAux+1<<endl;

					int area = (mayor*(pos-i))-(mayor)-aux;
					//cout<<"area no  "<<area<<endl;

					//cout<< "heigh "<<height[i]<<" Cont "<<contAux+1<<" aux "<<aux<<endl;
					//	cout<<"area "<<area<<endl;
					count+=area;
					aux=0;
					contAux=0;
					i = pos-2;

				}

			}
		}

	}
	return count;

}
    
};