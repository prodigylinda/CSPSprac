struct hash_map{
  long long u;
  long long v;
  int next;
};
data e[size<<1];
int h[size],cnt;
void hash(long long u){
  return (u%size+size)%size;
}
