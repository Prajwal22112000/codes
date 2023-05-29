import React from 'react'
import "./Hero.css"
import {HiOutlineLocationMarker} from "react-icons/hi";
import CountUp from 'react-countup';
const Hero = () => {
  return (
    <section className=' flexCenter hero-wrapper'>
      <div className='paddings innerWidth flexCenter hero-container'>
        <div className='flexColStart hero-left'>
          <div className=' hero-title'>
          <div className='orange-circle'></div>
            <h1>
              Discover<br/>
              More Suitable<br/>
              Property
            </h1>
          </div>
          <div className=' secondaryText flexColStart hero-description'>
            <span>Find a variety of properties that suit you very easily</span>
            <span>Forget all the difficulties in finding a residence for you</span>
          </div>
          <div className='flexCenter search-bar'>
            <HiOutlineLocationMarker color="var(--lightGreen)" size={23}/>
            <input type='text'/>
            <button className='button'>Search</button>
          </div>
          <div className='flexCenter stats'>
            <div className='flexColCenter stat'>
              <span>
                <CountUp start={8000} end={9000} duration={3}/>
                <span>+</span>
              </span>
              <span className=' secondaryText '>Happy Customers</span>
            </div>
            <div className='flexColCenter stat'>
              <span>
                <CountUp start={500} end={1000} duration={3}/>
                <span>+</span>
              </span>
              <span className=' secondaryText '>Premium Products</span>
            </div>
            <div className='flexColCenter stat'>
              <span>
                <CountUp start={0} end={14} duration={3}/>
                <span>+</span>
              </span>
              <span className=' secondaryText '>International Awards</span>
            </div>
          </div>
          </div>
        <div className=' flexColCenter hero-right'>
          <img src='./hero-image.png' className='image-container'/>
        </div>
      </div>
    </section>
  )
}

export default Hero;