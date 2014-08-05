
public class MergeSorter implements Sorter
{
    public void sort(Comparable[] data){
	merge(0, data.length-1, data);
    }
    private void merge(int head, int tail, Comparable[] data){
	if(head==tail) return;
	int center=(tail-head)/2+head;
	merge(head, center, data);
	merge(center+1, tail, data);
	
	Comparable tmpdata[]=new Comparable[tail-head+1];
	int left_idx=head;
	int right_idx=center+1;
	int tmp_idx=0;
	while(left_idx<center+1 && right_idx<tail+1){
	    if(data[right_idx].compareTo(data[left_idx])>0){
		tmpdata[tmp_idx]=data[left_idx];
		left_idx++;
	    } else {
		tmpdata[tmp_idx]=data[right_idx];
		right_idx++;
	    }
	    tmp_idx++;
	}
	if(left_idx<center+1){
	    while(left_idx<center+1){
		tmpdata[tmp_idx]=data[left_idx];
		left_idx++; tmp_idx++;
	    }
	} else {
	    while(right_idx<tail+1){
		tmpdata[tmp_idx]=data[right_idx];
		right_idx++; tmp_idx++;
	    }
	}
	for(int i=head; i<=tail; i++) data[i]=tmpdata[i-head];
    }
}
