
function string HalfEdgeID(int p0; int p1)
{
    return sprintf("%d-%d", p0, p1);
}

function string EdgeID(int p0; int p1)
{
    int a = min(p0, p1);
    int b = max(p0, p1);
    return HalfEdgeID(a, b);
}

function string EdgeFaceID(string edge_id; int prim_num)
{
    return sprintf("%s-%d", edge_id, prim_num);
}
