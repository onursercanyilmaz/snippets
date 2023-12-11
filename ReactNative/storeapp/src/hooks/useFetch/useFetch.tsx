import axios from 'axios';
import {useEffect, useState} from 'react';

interface useFetchProps {
  url: string;
}
export default function useFetch(props: useFetchProps) {
  const [data, setData] = useState<any>([]);
  const [loading, setLoading] = useState<boolean>(true);
  const [error, setError] = useState<any>(null);

  const fetchData = async () => {
    await axios
      .get(props.url)
      .then(res => {
        setData(res.data);
        setError(null);
      })
      .catch(err => {
        setError(err);
      })
      .finally(() => {
        setLoading(false);
      });
  };

  useEffect(() => {
    fetchData();
    //setLoading(false);
    // eslint-disable-next-line react-hooks/exhaustive-deps
  }, []);

  return {data, loading, error};
}
